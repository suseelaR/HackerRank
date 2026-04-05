int sum = 0;
  if(gender == 'b'){
    for(int i = 0; i < number_of_students; i = i + 2){
        sum = sum + *(marks + i);
    }
  } else if(gender == 'g'){
    for(int i = 1; i < number_of_students; i = i + 2){
        sum = sum + *(marks + i);
    }
  }
  
  return sum;
