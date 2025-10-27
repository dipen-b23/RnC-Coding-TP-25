class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = tuple(marks)

    def total(self):
        return sum(self.marks)

    def average(self):
        return sum(self.marks) / len(self.marks)


def create_students():
    students = []
    n = int(input("Enter number of students: "))
    subjects = int(input("Enter number of subjects: "))

    for i in range(n):
        print(f"\nEnter details for student {i+1}:")
        name = input("Name: ")
        marks = list(map(float, input(f"Enter {subjects} marks (space-separated): ").split()))
        students.append(Student(name, marks))

    return students


def analyze_students(students):
    if not students:
        print("No student data available.")
        return

    total_marks_all = sum(s.total() for s in students)
    total_subjects = len(students) * len(students[0].marks)
    avg_all = total_marks_all / total_subjects

    topper = max(students, key=lambda s: s.total())
    low_scorer = min(students, key=lambda s: s.total())

    print("\n--- Result Summary ---")
    print(f"Overall average marks: {avg_all:.2f}")
    print(f"Highest scorer: {topper.name} ({topper.total()} marks)")
    print(f"Lowest scorer: {low_scorer.name} ({low_scorer.total()} marks)")

    print("\nAll students (sorted by total marks):")
    students_sorted = sorted(students, key=lambda s: s.total(), reverse=True)
    for s in students_sorted:
        print(f"{s.name}: Total = {s.total()}, Average = {s.average():.2f}")


def main():
    students = create_students()
    analyze_students(students)


if __name__ == "__main__":
    main()
