const linearSearch = (arr, target) => {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) {
      return i;
    } 
  }
  return -1;
  //TC:0(N)
  //SC:0(1)
};

// console.log(linearSearch([4, 5, 6, 7, 0, 1, 2], 0));
// console.log(linearSearch([4, 5, 6, 7, 0, 1, 2], 3));

const globalLinearSearch = (arr, target) => {
    let res=[];
      for (let i = 0; i < arr.length; i++) {
        if (arr[i] === target) {
          res.push(i);
        } 
      }
      if(res.length===0) return -1;
      return res;
      //TC:0(N)
      //SC:0(n)
    };
    
    // console.log(globalLinearSearch([4, 0, 6, 7, 0, 1, 2], 0));
    // console.log(globalLinearSearch([4, 5, 6, 7, 0, 1, 2], 3));

    const binarySearch = (arr, target) => {
      
        };
        
        console.log(binarySearch([4, 0, 6, 7, 0, 1, 2], 0));
        console.log(binarySearch([4, 5, 6, 7, 0, 1, 2], 3));