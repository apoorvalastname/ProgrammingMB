
function init()
{
	player  = ["", "", ""]
	turn    = [0, 0, 0]
	maxCard = 0
	winner  = 0
	numOfTurns = 0
}

function changeImage (index)
{
	i = index - 1
	if (turn[i] > 0)
		return;

	images = ["2S","3S","4S","5S","6S","7S","8S","9S","10S","JS","QS","KS","AS",
			  "2D","3D","4D","5D","6D","7D","8D","9D","10D","JD","QD","KD","AD",
			  "2H","3H","4H","5H","6H","7H","8H","9H","10H","JH","QH","KH","AH",
			  "2C","3C","4C","5C","6C","7C","8C","9C","10C","JC","QC","KC","AC"]
	random  = Math.floor ( Math.random() * 52);
	imageId = "image" + index;	
	inputId = "input" + index;

    document.getElementById(imageId).src = "images/"+images[random]+".jpeg";
	player[i] = document.getElementById(inputId).value;
	turn[i] = random%13;
	numOfTurns++;
	
	if (maxCard < turn[i])
	{
		maxCard = turn[i];
		winner = i;
	}
	if (numOfTurns == 3)
		document.getElementById("output").innerText = "Congratulations " + player[winner] + ", You Won !!";
}

function resetImages ()
{
	init()
	document.getElementById("image1").src = "images/none.jpeg";
	document.getElementById("image2").src = "images/none.jpeg";
	document.getElementById("image3").src = "images/none.jpeg";
	document.getElementById("input1").value = "";
	document.getElementById("input2").value = "";
	document.getElementById("input3").value = "";
	document.getElementById("output").innerText = "";
}
init();
