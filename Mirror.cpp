#include "Mirror.h"

class Mirror: public GridSquare {
	Mirror(bool state) {
		this.state = state;
	}

	void reflect(int edge) {
		if (state == 0) {
			switch(edge) {
			case 0:
				return 1;
				break;
			case 1:
				return 0;
				break;
			case 2:
				return 3;
				break;
			case 3:
				return 2;
				break;
			}
		} else
			switch(edge) {
			case 0:
				return 3;
				break;
			case 1:
				return 2;
				break;
			case 2:
				return 1;
				break;
			case 3:
				return 0;
				break;
			}

	}

}