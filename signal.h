/* 
 *  Holds information needed to decode messages
 *	Data types:
 *		1: unsigned int
 *		2: signed int
 *		3: ...
 */

struct signal_structure
{
	char *id;
	int startBit;
	int length;
	int byteOrder;
	int dataType;
};