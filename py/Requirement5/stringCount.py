import re
def readSentence ():
	input_string =  input("Enter a sentence to find the count of each word.\n")
	return re.split(r' |,|\.',input_string)

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

def printWordCount (wordcount):
	for eachword in wordcount :
		print (eachword , " : ", wordcount[eachword])

def main ():
	words = readSentence()
	wordcount = findWordCount (words)
	printWordCount (wordcount)

if __name__ == "__main__" :
	main()
