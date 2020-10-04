// Calculates the Income Tax value

double income_tax_clc(float income)
{
  // Dont need to pay the Tax
  if(income < 1903.98f)
	  return 0;
  
  if(income > 1903.99f && income < 2826.65f)
	  return 0.075f * income;
  
  if(income > 2826.66 && income < 3751.05f)
	  return 0.15f * income;
  
  if(income > 3751.06f && income < 4664.68f)
	  return 0.225f * income;

  if(income > 4664.68f)
	  return 0.275 * income;

}
