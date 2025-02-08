import java.util.Scanner;

class Student {
    int rollno;
    String name;
    int marks;

    public Student(Scanner sc) { 
        System.out.println("Enter the roll no:");
        rollno = sc.nextInt();
        sc.nextLine(); 
        System.out.println("Enter the name of student:");
        name = sc.nextLine();
        System.out.println("Enter the marks:");
        marks = sc.nextInt();
    }

    public static void sortMarks(Student s[], int n) {
        for (int i = 0; i < n - 1; i++) { 
            for (int j = i + 1; j < n; j++) {
                if (s[i].marks < s[j].marks) {
                    Student temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
    }

    public static void display(Student s[], int n) {
        System.out.println("\n--- STUDENT DETAILS (Sorted by Marks) ---");
        System.out.println("ROLL NUMBER  NAME  MARKS");

        for (int i = 0; i < n; i++) {
            System.out.println(s[i].rollno + "  " + s[i].name + "  " + s[i].marks);
        }
    }
}

public class StudentDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of students:");
        int n = sc.nextInt();

        Student s[] = new Student[n];

        for (int i = 0; i < n; i++) {
            s[i] = new Student(sc); 
        }

        Student.sortMarks(s, n); 
        Student.display(s, n);   

        sc.close(); 
    }
}
