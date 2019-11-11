int main() {
  if (c) 
    return 1;
  else if (c2) 
    return 2;
  else 
    return 3;
    
  
  if (c1) 
    if (c2) 
      return 2;
    else 
      return 3;

    
  if (c1) 
    return 1;
  else 
    if (c2)    
      return 2;
}