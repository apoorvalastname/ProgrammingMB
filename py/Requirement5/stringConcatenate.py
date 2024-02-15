

# Accept 5 strings from the user
# Print the concatenated string of input strings

# Requirement5 : Modify the program to : 
# Check the length of the input string
# If the length of the any input string is more than 10, print an error and exit
# Check the length of the output string
# If the length of the output string is more than 40, print an error and exit.

def main() :
    outputstring = ""
    for i in range (5) :
        inputstring = input ("Enter string " + str(i) + " : ")
        outputstring += inputstring
    print (outputstring)
    
if __name__ == "__main__" :
    main()

