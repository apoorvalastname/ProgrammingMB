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

