
class circle {
	public: //The class' public functions
		double radius();
		double circumference();
		double area(); 
		void populate_classobj(double x1, double y1, double x2, double y2);

	protected: //member accessible bu self and derived classes
		double distance();

	private: //The class' private internal data members
		double x1;
		double y1;
		double x2;
		double y2;
};

