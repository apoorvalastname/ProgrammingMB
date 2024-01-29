
# Datatypes and Operators

math = 90
science = 85
languageArts = 80
pe = 95
total = math + science + languageArts + pe
average = total / 4;
print ("Total : ", total, ", Average : ", average, '\n')

# ---------------------------------------------
# Input and Output

name = input ("Enter your name ")
age  = input ("Enter your age ")
age  = int (age)

# If / Else
if (age < 10) : 
	print ("Too young for Scouts BSA")
elif (age > 18) :
	print ("Too old for Scouts BSA")
else :
	print ("Welcome to Scouts BSA")

# list
subjects = ["math", "science", "languageArts", "pe"]
print (subjects[0], '\n')
subjects.append ("history")

# for loop
for subject in subjects :
    print (subject)
print ('\n')

# dictionary
testScores = {"math":90, "science":85, "languageArts":80, "pe":95 }
print (testScores["math"])
print ('\n')
for eachScore in testScores :
   print (eachScore, testScores[eachScore])

# function and break
def findScore (subject) :
    foundSubject = False
    testScores = {"math":90, "science":85, "languageArts":80, "pe":95 }
    for test in testScores :
        if (test == subject):
            print (subject, ' : ', testScores[subject])
            foundSubject = True
            break
    if not foundSubject :
       print ("There was NO test on the subject : ", subject) 
    
# function call
subject = input ("Which subject ? ")
findScore (subject)



