function resetFunction ()
{
	location.reload();
}

// Requirement5 - Modify the doneFunction() to do the following :
// If the super power is "Super Strength", alert/inform the user about who else has the same power (Eg.Hercules)
// Add a few more super powers of your choice and try 'alert' with them.

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
		alert ("AWESOME SUPER POWERS!!");
	}
	else
	{
		alert ("All Super Heros need a NAME and a SUPER POWER!");
	}
}

