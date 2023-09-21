const students = [
    { name: "ram", english: 80, maths: 90 },
    { name: "sam", english: 90, maths: 80 }
  ];

const calculateStudent=(students)=>students.english+students.maths;

const findTopper=(students)=>{
    let totalMarks=0,topper=null;
    for(let student of students){
    let marks=calculateStudent(student)
    if(totalMarks<marks){
        totalMarks=marks;
        // topper=student.name;
        topper=students.indexOf(student)
    // }else if(marks===totalMarks && student.english>students.find((s)=>s.name===topper).english){
    }else if(marks===totalMarks && student.english>students[topper].english){
        topper=students.indexOf(student);
    }
    }
    // return topper;
    return students[topper].name;
}

// console.log(findTopper(students));