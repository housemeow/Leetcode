var match = document.querySelector('.container__nthg').innerText.split('\n').join('').match(/(\d+ ms)[^\d]+(\d+\.\d+%).+(\d+ MB)[^\d]+(\d+\.\d+%)/)
var child = document.createElement('input');
child.id = 'test'
child.value = `${match[1]} (**${match[2]}**), ${match[3]} (**${match[4]}**)`;
document.documentElement.appendChild(child);
child.select()
document.execCommand("copy");
