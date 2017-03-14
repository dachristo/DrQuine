(function f() {
	var fs = require('fs');
	var FT_GRACE = function (file, contenue) {
		fs.writeFile(file, contenue, function(err) {});
	}
	var FILE = "Grace_kid.js";
	FT_GRACE(FILE, '(' + f.toString() + ')()');
})()
