All test case  conditions are currently working, code is under line limits for norm.
Still needs to be reviewed and normed on all files.
Things we need:

		Scrubbing for accurate inputs(if required),
		Setting up a few more functions for bonus,(rectangle and square should be very easy to implement currently)


-Make a function that checks for offset (spaces)

implement like so:

	 offset for triangle (first line)
<---->|
      |
o-----o---o
 \   / \   \
<->o/---\---o
 |
 |
 offset for lozenge (last line)

a circle has no offset only at the diameter line directly  between the top and bottom

the reverse for these is just the opposite of the former. with spaces instead of any other character

to differentiate sastantua,

the formula for offset is: 
			
offset = base_offset + lines_left_in_floor + floor_number - 2;

base_offset = #of_stars in bottom floors base - current floors base

This formula gives you the number of stars at the top level of each floor.

int             top_len(int size, int fl_num)
{
        int             star_increase;
        int             i;

        if (fl_num == size)
                return (1);
        star_increase = 4;
        i = fl_num;
        while (i <= size)
        {
                if ((fl_num % 2 == 0) && (i % 2 == 1))
                        star_increase += 4;
                else if (fl_num % 2 == 0)
                        star_increase += 2;
                else if (fl_num % 2 == 1 && (i % 2 == 1))
                        star_increase += 2;
                else
                        star_increase += 4;
                i++;
        }
        return (top_len(size, fl_num + 1) + star_increase);
}

when doing this, the reverse is just the opposite where in each offset is a '*******/' rather than spaces.
