class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = tuple(marks)

    def total(self):
        return sum(self.marks)

    def average(self):
        return self.total() / len(self.marks)


def create_students():
    students = []
    n = int(input("Enter number of students: "))
    m = int(input("Enter number of subjects: "))

    for i in range(n):
        name = input(f"\nEnter name of student {i+1}: ")
        marks = []
        for j in range(m):
            mark = int(input(f"Enter mark for subject {j+1}: "))
            marks.append(mark)
        students.append(Student(name, marks))
    return students


def analyze_students(students):
    total_all = 0
    for s in students:
        total_all += s.total()
    overall_avg = total_all / len(students)

    highest = students[0]
    lowest = students[0]

    for s in students:
        if s.total() > highest.total():
            highest = s
        if s.total() < lowest.total():
            lowest = s

    for i in range(len(students)):
        for j in range(i + 1, len(students)):
            if students[i].total() < students[j].total():
                students[i], students[j] = students[j], students[i]

    print("\nOverall average:", overall_avg)
    print("Highest marks:", highest.name, highest.total())
    print("Lowest marks:", lowest.name, lowest.total())
    print("\nStudents sorted by total marks (high to low):")
    for s in students:
        print(s.name, s.total())


def main():
    students = create_students()
    analyze_students(students)


main()
