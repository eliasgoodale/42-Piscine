int *convert(int dec)
	
	int base_10num = dec
	if (dec == 0)
	{
	return 0;
	}
	while(base_10 >= 1)
	{
	base_10num = (dec % 2);
	arrsize++;
	}
	int *bin = (int*)malloc(arrsize * sizeof(int));
	while(i <= arrsize)
	{
		bin[arrsize] = (dec % 2);
		i++;
	}
	return(bin);
