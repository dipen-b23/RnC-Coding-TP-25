class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks
    def total(self):
        return sum(self.marks)
    def average(self):
        return self.total() / len(self.marks)

def create_student():
    students = []
    no_stu = int(input("Enter number of students: "))
    no_sub = int(input("Enter number of subjects: "))
    for i in range(no_stu):
        print(f"\nEnter details for student {i+1}:")
        name = input("Enter name of the student: ")
        marks_input = input(f"Enter {no_sub} marks separated by space: ")
        marks = marks_input.split()
        marks_int = []
        for m in marks:
            marks_int.append(int(m))
        students.append(Student(name, marks_int))
    return students

def analyze_students(students):
    total_marks = [mark for student in students for mark in student.marks]
    average = sum(total_marks) / len(total_marks)
    print(f"\nAverage marks of all students combined: {average:.2f}")

    high = max(students, key=lambda s: s.total())
    low = min(students, key=lambda s: s.total())
    print(f"Highest total marks: {high.name} ({high.total()})")
    print(f"Lowest total marks: {low.name} ({low.total()})")

    sorted_students = sorted(students, key=lambda s: s.total(), reverse=True)
    print("\nAll students sorted by total marks (descending):")
    for s in sorted_students:
        print(f"{s.name} - Total: {s.total()}, Average: {s.average():.2f}")

def main():
    student_list = create_student()
    analyze_students(student_list)

main()
