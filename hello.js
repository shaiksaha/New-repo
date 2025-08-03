let form = document.querySelector('form');

form.addEventListener('submit', function (det) {
    det.preventDefault();

    let card = document.createElement('div');
    card.classList.add('card');

    let profile = document.createElement('div');
    profile.classList.add('profile');

    let imges = document.createElement('img');
    imges.setAttribute("src", "https://images.unsplash.com/photo-1752743092036-1bc260931bd5?w=500&auto=format&fit=crop&q=60&ixlib=rb-4.1.0&ixid=M3wxMjA3fDB8MHxmZWF0dXJlZC1waG90b3MtZmVlZHw0OHx8fGVufDB8fHx8fA%3D%3D");

    let h3 = document.createElement('h3');
    h3.classList.add('h3');
    h3.innerText = "User Name"; // Example text

    profile.appendChild(imges);
    card.appendChild(profile);
    card.appendChild(h3);

    document.body.appendChild(card); // or append to some container instead of body
});
