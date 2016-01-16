function Controller() {
    require("alloy/controllers/BaseController").apply(this, Array.prototype.slice.call(arguments));
    this.__controllerPath = "index";
    arguments[0] ? arguments[0]["__parentSymbol"] : null;
    arguments[0] ? arguments[0]["$model"] : null;
    arguments[0] ? arguments[0]["__itemTemplate"] : null;
    var $ = this;
    var exports = {};
    $.__views.win = Ti.UI.createWindow({
        backgroundColor: "white",
        id: "win"
    });
    $.__views.win && $.addTopLevelView($.__views.win);
    $.__views.map = Alloy.Globals.Map.createView({
        userLocation: false,
        animate: true,
        height: "50%",
        top: 0,
        region: {
            latitude: 37.38,
            latitudeDelta: .2,
            longitude: -122.05,
            longitudeDelta: .2
        },
        id: "map",
        ns: "Alloy.Globals.Map"
    });
    $.__views.win.add($.__views.map);
    $.__views.dividerLine = Ti.UI.createView({
        backgroundColor: "black",
        height: 1,
        width: Ti.UI.FILL,
        top: "50%",
        zIndex: 2,
        id: "dividerLine"
    });
    $.__views.win.add($.__views.dividerLine);
    $.__views.map1 = Alloy.Globals.Map.createView({
        userLocation: false,
        animate: true,
        height: "50%",
        top: "50%",
        region: {
            latitude: -33.87365,
            longitude: 151.20689,
            latitudeDelta: .1,
            longitudeDelta: .1
        },
        id: "map1",
        ns: "Alloy.Globals.Map"
    });
    $.__views.win.add($.__views.map1);
    exports.destroy = function() {};
    _.extend($, $.__views);
    var anno1 = Alloy.Globals.Map.createAnnotation({
        title: "Mountain View",
        latitude: 37.389569,
        longitude: -122.050212
    });
    $.map.addAnnotation(anno1);
    var anno2 = Alloy.Globals.Map.createAnnotation({
        title: "Sydney",
        latitude: -33.87365,
        longitude: 151.20689
    });
    $.map1.addAnnotation(anno2);
    if (true && parseInt(Ti.Platform.version, 10) >= 7) {
        var cam = Alloy.Globals.Map.createCamera({
            altitude: 300,
            centerCoordinate: {
                latitude: 37.389569,
                longitude: -122.050212
            },
            heading: -45,
            pitch: 60,
            showsBuildings: true
        });
        var animCam = function() {
            $.map.removeEventListener("complete", animCam);
            $.map.animateCamera({
                camera: cam,
                curve: Ti.UI.ANIMATION_CURVE_EASE_IN,
                duration: 500
            });
        };
        $.map.addEventListener("complete", animCam);
    }
    $.map1.mapType = Alloy.Globals.Map.SATELLITE_TYPE;
    $.win.open();
    _.extend($, exports);
}

var Alloy = require("alloy"), Backbone = Alloy.Backbone, _ = Alloy._;

module.exports = Controller;