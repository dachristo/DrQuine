(function f() {
	var fs = require('fs');
	var new_sully = function (file, contenue) {
		fs.writeFile(file, contenue, function(err) {
			if (err)
				console.log(err);
		});
	}
	var i = 5;
	var file = "Sully_x.js";
	var exec = require('child_process').exec;
	var cmd = 'node Sully_x.js';
	var path = require('path');
	var scriptName = path.basename(__filename);	
	if (scriptName == "sully.js")
	{	
		var file = file.replace('x', i);
		new_sully(file, '(' + f.toString() + ')()');
	}
	else if (i > 0)
	{
		i--;
		var file = file.replace('x', i);
		new_sully(file, '(' + f.toString().replace(/i = 1/g, 'i = 0').replace(/i = 2/g, 'i = 1').replace(/i = 3/g, 'i = 2').replace(/i = 4/g, 'i = 3').replace(/i = 5/g, 'i = 4') + ')()');
	}
	var cmd = cmd.replace('x', i);
	if (i > 0)
	{
		exec(cmd, function(error, stdout, stderr) {
		});
	}
})()
