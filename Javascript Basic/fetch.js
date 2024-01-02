// const challenge=fetch('/challenges')
//   .then(response => response.json())
//   .then(data => {
//     // Parse the 'data' array and count occurrences of 'version' in the 'name' field
//     const count = data.data.reduce((acc, challenge) => {
//       const words = challenge.name.toLowerCase().split(' ');
//       return acc + words.filter(word => word === 'version').length;
//     }, 0);

//     // POST the result to /challenges
//     fetch('/challenges', {
//       method: 'POST',
//       headers: {
//         'Content-Type': 'application/json',
//       },
//       body: JSON.stringify({ count: count }),
//     })
//       .then(response => response.json())
//       .then(result => console.log(result))
//       .catch(error => console.error('Error posting result:', error));
//   })
//   .catch(error => console.error('Error fetching challenges:', error));
// console.log(challenge)

// const getData=fetch('https://ubahthebuilder.tech/posts/1')
// .then(data=>data.json())
// .then(response=>response.title)
// .catch(error=>console.log(error));

// console.log(getData)

const update={
        title: 'A blog post by Kingsley',
        body: 'Brilliant post on fetch API',
        userId: 1,
};

fetch('https://jsonplaceholder.typicode.com/posts',{
method:'POST',
headers:{
    "Content-type":"Application/json",
},
body:JSON.stringify(update)
})
.then(response=>response.json())
.then(result => console.log(result))
.catch(e=>console.log(e));