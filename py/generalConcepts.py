
# datatypes and operations
math = 90
science = 85
languageArts = 80
pe = 95
score = math + science + languageArts + pe
print (score, '\n')

# if/else
if  score >= 350 : 
  award = "Platinum"
elif score >= 300 :
  award = "diamond"
elif score >= 250 :
  award = "gold"
elif score >= 250 :
  award = "silver"
else:
  award = "bronze"
print (score, award, '\n')

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



