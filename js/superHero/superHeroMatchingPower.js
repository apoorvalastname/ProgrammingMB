// This function is invoked when the cursor is in "Super Hero Name" input box.
// If "Super Power" is already selected, show only the appropriate
// "Super Hero" options to select from the list.

function superhero (count)
{
	// Change the color of the focused input box
	let me = document.getElementById("nameInput"+count);
	me.style.background = "orange";

	// Map of Super Power and corresponding Super Heros
	let superHeroMap = {
		"Super Strength"    : ["Superman", "Hulk", "Vision"],
		"Flight"            : ["Superman", "Ironman", "Black Canary", "Vision", "Ms.Marvel"],
		"Super Speed" 	    : ["Superman", "Vision", "Flash"],
		"Shape Shifting"    : ["Hulk", "Beast Boy"],
		"Laser Beam"        : ["Superman", "Vision", "Ironman", "Ms.Marvel"],
		"Sonic Scream"      : ["Black Canary", "Black Bolt"], 
		"Time Manipulation" : ["Black Bolt"],
		"Intangibility"     : ["Vision"],
		"Zoolingualism"     : ["Beast Boy", "Antman"],
		"Size Changing"     : ["Ms.Marvel", "Antman"],
		"Invisibility"      : ["Invisible Woman"],
		"Force Field"       : ["Invisible Woman"] };
	
	// Get the SuperPower from the superPowerInput box. 
	// Check and see if superPowerInput box is empty or not.
	let power = document.getElementById("superPowerInput"+count).value;
	let powerlist = []

	// If superPowerInput box is empty, then display all superHeros as options
	// If superPowerInput box has a superPower already selected, then display
	// only the superHeros, who have that super power.	
	if (power == "")
		powerlist = getAllOptions("superHero");
	else
		powerlist = superHeroMap[power];

	document.getElementById("superHeros").innerHTML = createOptions(powerlist);
}

function superpower (count)
{
	// Change the color of the focused input box
	let me = document.getElementById("superPowerInput"+count);
	me.style.background = "yellow";

	// Map of superHeros and their super powers
	let superPowerMap = {
		"Superman"        : [ "Super Strength", "Flight", "Super Speed", "Laser Beam"],
		"Hulk"            : [ "Super Strength", "Shape Shifting"],
		"Flash"           : [ "Super Speed"],
		"Ironman"      	  : [ "Laser Beam", "Flight"],
		"Black Bolt"   	  : [ "Sonic Scream", "Time Manipulation"],
		"Black Canary" 	  : [ "Sonic Scream", "Flight"],
		"Vision"          : [ "Super Strength", "Intangibility",
						  	  "Flight", "Super Speed", "Laser Beam"],
		"Beast Boy"       : [ "Shape Shifting", "Zoolingualism"],
		"Antman"          : [ "Size Changing", "Zoolingualism"],
		"Invisible Woman" : [ "Invisibility", "Force Field"], 
		"Ms.Marvel"       : [ "Laser Beam", "Size Changing", "Flight"]
	};

	// Get the value from the corresponding superHero nameInput box
	// Check and see if a superHero name is already selected or not
	let name = document.getElementById("nameInput"+count).value;
	let herolist = []

	// If no name is already selected, show all super powers to select from
	// If a name is selected, show only that super hero's super powers
	if (name == "")
		herolist = getAllOptions("superPower");
	else
		herolist = superPowerMap[name];

	document.getElementById("superPowers").innerHTML = createOptions(herolist);
}

// choices is the list of options to generate for the input box
function createOptions (choices)
{
	let options = "";
	for (let i=0; i < choices.length; i++)
		options += '<option value="' + choices[i] + '"/>';
	return options;
}

// Return all the options (superHero names, or superPowers) for the given optionType. 
// optionType can be superPowers or superHeros
function getAllOptions (optionType)
{
	let powers = ["Super Strength", "Super Speed", "Flight",
				  "Shape Shifting", "Laser Beam", "Sonic Scream",
				  "Time Manipulation", "Intangibility", "Zoolingualism",
				  "Size Changing", "Force Field", "Invisibility" ];
	let heros  = ["Superman", "Hulk", "Flash", "Ironman", "Black Bolt",
				  "Black Canary", "Spiderman", "Vision", "Beast Boy",
				  "Antman", "Invisible Woman", "Ms.Marvel"];
	if (optionType == "superPower")
		return powers;
	return heros;
}

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
		alert ("AWESOME SUPER POWERS!!");
	}
	else
	{
		alert ("All Super Heros need a NAME and a SUPER POWER!");
	}
}

