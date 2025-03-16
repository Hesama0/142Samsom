int main() {
    int N;
    cin >> N;
    if (N <= 2) return 1;

    Manager* managers[N];
    for (int i = 0; i < N; i++) {
        string name, dept;
        int age, day, month, year;
        double salary;
        cin >> name >> salary >> age >> day >> month >> year >> dept;
        managers[i] = new Manager(name, age, salary, Date(day, month, year));
        managers[i]->department = dept;
    }

    printTable(managers, N);

    managers[1]->appointmentDate.month = 7;
    managers[1]->appointmentDate.year = 2010;
    managers[2]->appointmentDate.month = 5;
    managers[2]->appointmentDate.year = 1992;

    printTable(managers, N);

    for (int i = 0; i < N; i++) {
        delete managers[i];
    }

    return 0;
}
