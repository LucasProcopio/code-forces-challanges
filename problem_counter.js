const fs = require('fs');
const dir = './';


fs.readdir(dir, (err, files) => {
    if(err) {
        console.error(err);
        return;
    }
    const counter = countFiles(files);
    writeCounterFile(counter);
    console.log('FILE COUNTER GENERATED SUCCESSFULLY');
});


function countFiles(files) {
    let counter = 0;
    files.forEach(file => {
        counter += matchHashFile(file);
    });
    return counter;
}

function matchHashFile(fileName) {
    return (fileName.match(/#/g) || []).length;
}

function writeCounterFile(counter) {
    const goal = 300;
    const percentAcheieved = (counter / goal) * 100;
    const content = 
    `# CP problem solved COUNTER
    
## Problems to be solved ( ${goal} )

## Problems solved ( ${counter} )

## Percentage solved ( ${percentAcheieved}% )

Author: Lucas Henrique Procopio
    `;

    fs.writeFile('./problem_solving_goal.txt', content, err => {
        if(err) {
            console.error(err);
            return;
        }
    })
}