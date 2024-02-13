operation = "add "

function doMath (op='+')
{
    let n1 = parseInt(document.getElementById("n1").value)
    let n2 = parseInt(document.getElementById("n2").value)

	if (op == '+')
	{
		document.getElementById("n3").value = n1+n2
		operation = "add "
	}
	else if (op =='-')
	{
		document.getElementById("n3").value = n1-n2
		operation = "subtract "
	}
	else if (op == 'x')
	{
		document.getElementById("n3").value = n1*n2
		operation = "multiply "
	}
	else if (op == '/')
	{
		if (n2 == 0)
			alert ("The divisor can NOT be 0!")
		else
			document.getElementById("n3").value = n1/n2
		operation = "divide "
	}
	else
	{
		alert ("Incorrect Operation")
	}
}
function describeOperation()
{
    document.getElementById("p1").innerText = "When you " + operation + document.getElementById("n1").value + 
					      " and " + document.getElementById("n2").value + 
					      ", you get " + document.getElementById("n3").value
}
