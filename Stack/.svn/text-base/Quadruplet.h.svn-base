#ifndef QUADRUPLET_H
#define QUADRUPLET_H

#include <string>
typedef enum Kind{CST = 1, VCST=2} Kind;
typedef enum Type{ENTIER=1, BOOLEAN=2, VOID=3 }Type ;

class Quadruplet{

	public:
		Quadruplet();
		Quadruplet(std::string label, int value, Type type, Kind kind);
		void display() const;
		std::string getLabel()const;
		void setLabel(std::string);
		Type getType() const;
		void setType(Type);
		Kind getKind()const;
		void setKind(Kind);
		int getValue()const;
		void setValue(int);

	private:
		std::string label;
		int value;
		Type type;
		Kind kind;

};

#endif
