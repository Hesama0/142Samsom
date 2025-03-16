//Mohammed Osama Mohammed Bibi
//2231173006
//Lab05

class Printer {
    private:
        int id;
        bool idle;
        static bool printing;
    
    public:
        Printer(int);
        static bool isPrinting();
        void startPrint();
        void stopPrint();
    };