import re

# This function reads input from the user, and split the input sentence into words,
# and returns the list of all the words in the sentence.
def readSentence ():
	input_string =  input("Enter a sentence to find the count of each word.\n")
	return re.split(r' |,|\.',input_string)

# This function processes each word in the list 'words'
# and counts the number of times each word is in the list 'words'
def findWordCount (words) :
	wordcount = {}
	for word in words :
		word = (word.lower()).strip()
		if len(word) == 0:
			continue
		if  word not in wordcount :
			wordcount[word] = 1
		else :
			wordcount[word] = wordcount[word] + 1
	return wordcount

# Requirement5
# Write a method to find the count of one particular word eg. "the", given by the user

# This function prints -
#	word : number of occurences
def printWordCount (wordcount):
	for eachword in wordcount :
		print (eachword , " : ", wordcount[eachword])

def main ():
	# Read the input string from the user
	words = readSentence()

	# Find the number of times each word in the string is repeated
	wordcount = findWordCount (words)

	# Print the number of times each word in the string is repeated
	printWordCount (wordcount)

if __name__ == "__main__" :
	main()
