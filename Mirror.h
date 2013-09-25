class Mirror: public GridSquare {
private:
	bool state = 0;

public:
	Mirror(bool state);

	void reflect(int edge);
};;