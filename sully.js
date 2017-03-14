(function f() {
	var fs = require('fs');
	var new_sully = function (file, contenue) {
		file.replace(i + 1, 'x');
		fs.writeFile(file, contenue, function(err) {
			if (err)
				console.log(err);
		});
		console.log(file + " a été écrit");
	}
	var i = 5;
	var file = "Sully_x.js";
	var exec = require('child_process').exec;
	var cmd = 'node ./Sully_x.js';
	i--;
	var file = file.replace('x', i);
	new_sully(file, '(' + f.toString().replace(m, n).replace(l, m).replace(k, l).replace(j, k).replace(i, j) + ')()');
	var cmd = cmd.replace('x', i);
	exec(cmd, function(error, stdout, stderr) {
		console.log("fin : ", i);
	});
})()
