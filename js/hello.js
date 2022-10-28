
function doMath (op='+')
{
    let n1 = parseInt(document.getElementById("n1").value)
    let n2 = parseInt(document.getElementById("n2").value)
    switch (op)
    {
        case '+' :
            document.getElementById("n3").value = n1+n2
            break;
        case '-' :
            document.getElementById("n3").value = n1-n2
            break;
        case 'x' :
            document.getElementById("n3").value = n1*n2
            break;
        case '/' :
            if (n2 == 0)
                alert ("The divisor can NOT be 0!")
            else
                document.getElementById("n3").value = n1/n2
            break;
        default:
            alert ("Incorrect Operation")   
    }
}


