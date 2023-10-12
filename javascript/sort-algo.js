//bubble sort
//checks for adjacent elements and sorts
const arr = [29, 10, 14, 37, 14];
//inplace means bubble sort
const bubbleSort = (arr) => {
  let n = arr.length;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
      }
    }
  }
  return arr;
};
//TC:0(N)=>Best case=>0(2N) when arr is completely sorted
//TC:0(N^2)=>WORST CASE
//TC:0(N^2)=>AVERAGE CASE=>N*N/2
//SC:0(1)
console.log(bubbleSort(arr));

//selection sort
//takes one element and compares with every single element in the arr
const selectionSort = (arr) => {
  let n = arr.length;
  for (let i = 0; i < n - 1; i++) {
    let minIndex = i;
    for (let j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) minIndex = j;
    }

    if (minIndex !== i) {
      [arr[i], arr[minIndex]] = [arr[minIndex], arr[i]];
    }
  }
  return arr;
};
//TC:O(N^2)
//SC:0(1)
console.log(selectionSort(arr));

//Insertion sort
//take one section at a time and sort things out

const insertionSort = (arr) => {
    let n = arr.length;
    for(let i=1;i<n;i++){
      const key=arr[i];
      let j=i-1;
      while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
      }
      arr[j+1]=key;
    }
    return arr;
  };
  //BCTC:0(N)
  //WCTC:O(N^2)
    //ACTC:O(N^2)
  //SC:0(1)
  const arr2=[29,10,14,37,14,33,8,11]
  console.log(insertionSort(arr2));

  const fruits =["dragon fruit","apple","cherry","banana", "date"]
  console.log(fruits.sort());

  const nums=[10,5,18,1,27]//the first elements of the alphabets are converted to strings and then are sorted
  console.log(nums.sort())

  const compareFunction = (a, b) => {
    // 1. <0 => a comes first
    // 2. 0  => nothing changes
    // 3. >0 => b comes first
    
    //return a-b;//as
    return b-a;//des
  }
  console.log(nums.sort(compareFunction));

  const people = [
    {name: "Piyush", age: 25},
    {name: "Suyash", age: 22},
    {name: "Raj", age: 30},
    {name: "Ishan", age: 27},
  ];
  
  const compareFunctionForObj = (a, b) => {
    return a.age-b.age;
  }

  console.log(people.sort(compareFunctionForObj));

  const numss=[3,2,1,5,6,4]
  console.log(numss.sort((a,b)=>a-b));


