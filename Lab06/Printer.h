class Printer{
private:
    int id;      		    /* printer id */
    bool idle;              /* status for the current printer */
    static bool printing;   /* shared among all printers to identify whether
                               there are a printer working right now */
public:
	Printer(int);

	~Printer();
			
	static bool isPrinting();
	
	void startPrint();
	
	void stopPrint();
};