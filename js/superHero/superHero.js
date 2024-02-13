function resetFunction ()
{
	location.reload();
}

function doneFunction (count)
{
	let success = true
	for (let i=0; i<count; i++)
	{
		let name  = document.getElementById("nameInput"+i).value
		let power = document.getElementById("superPowerInput"+i).value
		if (name == "" || power == "")
		{
			success = false;
			break;
		}
	}
	if (success == true)
	{
		alert ("COOL!! GREAT SUPER HEROS!");
	}
	else
	{
		alert ("All Super Heros need a NAME and a SUPER POWER!");
	}
}

function startGame ()
{
	let count = parseInt (document.getElementById("in1").value);

	for (let i = 0; i < count ; i++)
	{
		// CREATE LABEL - Super Hero Name
		let nameLabel = document.createElement("label");
		nameLabel.innerText = "Super Hero Name";
		document.body.appendChild(nameLabel);

		// CREATE INPUT BOX for - Super Hero Name
		let nameInput = document.createElement("input");
		nameInput.id = "nameInput" + i;
		document.body.appendChild(nameInput);

		// CREATE LABEL - Super Power
		let superPowerLabel = document.createElement("label");
		superPowerLabel.innerText = "Super Power" ;
		document.body.appendChild(superPowerLabel);

		// CREATE INPUT BOX for - Super Power
		let superPowerInput = document.createElement("input");
		superPowerInput.id = "superPowerInput" + i;
		document.body.appendChild(superPowerInput);

		let para = document.createElement("p");
		document.body.appendChild(para);
	}
	
	// CREATE BUTTON - RESET
	let resetButton = document.createElement("button");
	resetButton.innerHTML = "RESET";
	resetButton.onclick = resetFunction;
	document.body.appendChild(resetButton);

	// CREATE BUTTON - DONE
	let doneButton = document.createElement("button");
	doneButton.innerHTML = "DONE";
	doneButton.onclick = function() { doneFunction(count); };
	document.body.appendChild(doneButton);
}
