#include "Header.h"
bool s1; bool s2; bool s3;
bool s4; bool s5; bool s6;
bool s7; bool s8; bool s9;

bool is_slot_valid(int slot)
{
	if (slot == 1 || slot == 2 || slot == 3 ||
		slot == 4 || slot == 5 || slot == 6 ||
		slot == 7 || slot == 8 || slot == 9  )
	{
		
		return true; 
	}
	else
	{
		return false;
	}
}
bool is_slot1_avail()
{
	if (s1 == false)
	{
		s1 = true;
		return true;
	}
	else
	{
		return false;
	}
}
bool is_slot2_avail()
{
	if (s2 == false)
	{
		s2 = true;
		return true;
	}
	else
	{
		return false;
	}
}
bool is_slot3_avail()
{
	if (s3 == false)
	{
		s3 = true;
		return true;
	}
	else
	{
		return false;
	}
}
bool is_slot4_avail()
{
	if (s4 == false)
	{
		s4 = true;
		return true;
	}
	else
	{
		return false;
	}
}
bool is_slot5_avail()
{
	if (s5 == false)
	{
		s5 = true;
		return true;
	}
	else
	{
		return false;
	}
}
bool is_slot6_avail()
{
	if (s6 == false)
	{
		s6 = true;
		return true;
	}
	else
	{
		return false;
	}
}
bool is_slot7_avail()
{
	if (s7 == false)
	{
		s7 = true;
		return true;
	}
	else
	{
		return false;
	}
}
bool is_slot8_avail()
{
	if (s8 == false)
	{
		s8 = true;
		return true;
	}
	else
	{
		return false;
	}
}
bool is_slot9_avail()
{
	if (s9 == false)
	{
		s9 = true;
		return true;
	}
	else
	{
		return false;
	}
}

