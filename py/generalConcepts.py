
def updateSubjects (subjectScores) :
    moreSubjects = 'y'
    while moreSubjects == 'y' or moreSubjects == 'Y' :
        subject = input("Add a new subject : ")
        score   = input("Add student's score in " + subject + " : ")
        subjectScores[subject] = score
        moreSubjects = input ("More subjects ? (y/n) ")
    return len(subjectScores)

def main():
	# ---------------------------------------------
	# DATATYPES
	math = 90
	science = 85
	languageArts = 80
	geography = 95

	# OPERATORS
	total = math + science + languageArts + geography
	average = total / 4;
	print ("Total : ", total, ", Average : ", average, '\n')

	# ---------------------------------------------
	# INPUT / OUTPUT
	name = input ("Enter your name ")
	age  = input ("Enter your age ")
	age  = int (age)

	# CONDITIONAL STATEMENTS : IF / ELSE
	if (age < 10) : 
		print ("Too young for Scouts BSA")
	elif (age > 18) :
		print ("Too old for Scouts BSA")
	else :
		print ("Welcome to Scouts BSA")

    # ---------------------------------------------
    # COLLECTIONS AND LOOPS
    # List
    subjects = ["Math", "Science", "LanguageArts", "Geography"]
    subjects.append ("History")
    print (subjects)

	# For Loop
    for subject in subjects :
        print (subject)
        
    # Dictionary
    subjectScores = {"Math":90, "Science":85, "LanguageArts":80, "Geography":95 }
    print (subjectScores)

    for subject in subjectScores :
        print (subject, " : ", subjectScores[subject])

	# While Loop
	word = "go";
    while word != "stop" : 
        word = input ("Enter word : ")

    # ---------------------------------------------
    # FUNCTIONS / METHODS
	totalSubjects = updateSubjects (subjectScores)
	print ("Total number of Subjects is  : " ,totalSubjects)
    for subject in subjectScores :
        print (subject, " : ", subjectScores[subject])

if __name__ == "__main__" :
	main()
