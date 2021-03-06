class Person:
	def __init__(self, firstName, lastName, idNumber):
		self.firstName = firstName
		self.lastName = lastName
		self.idNumber = idNumber
	def printPerson(self):
		print("Name:", self.lastName + ",", self.firstName)
		print("ID:", self.idNumber)

class Student(Person):
    
    def __init__(self, firstName, lastName, idNumber, Scores):
        super().__init__(firstName, lastName, idNumber)
        self.scores = Scores
        
    def printPerson(self):
        return super().printPerson()
    
    def calculate(self):
        sumi = 0
        for i in self.scores:
            sumi += i
        num = sumi/len(self.scores) 
        if num >= 90:
            return 'O'
        elif num >= 80 and num < 90:
            return 'E'
        elif num >= 70 and num < 80:
            return 'A'
        elif num >= 55 and num < 70:
            return 'P'
        elif num >= 40 and num < 55:
            return 'D'
        else:
            return 'T'
   

line = input().split()
firstName = line[0]
lastName = line[1]
idNum = line[2]
numScores = int(input()) # not needed for Python
scores = list( map(int, input().split()) )
s = Student(firstName, lastName, idNum, scores)
s.printPerson()
print("Grade:", s.calculate())