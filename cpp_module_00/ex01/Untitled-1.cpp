
class Myclass {
	private:
		char* p;

	Myclass() {
		p = "lol";
	}

	Myclass(std::string name) {
		p = name;
	}

	int len() {
		while (p[i] != '\0' )
		{
			i++;
		}
		return i;
	}
}

