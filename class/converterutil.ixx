module converter;
export namespace converterUtil
{
	class converter
	{
		public:
		int CtoB(int year)
		{
			return year + 543;
		}

		int CelsiusToFahrenheit(int c)
		{
			return (c * 1.8) + 32;
		}
	};
}