const apiKey = "ed358f4a757d4c41965f19450b268d6e";
const verifybtn = document.getElementById('button');

verifybtn.addEventListener('click', function() {
    const email = document.getElementById('input').value;
    
    fetch(`https://emailvalidation.abstractapi.com/v1/?api_key=${apiKey}&email=${email}`)

    .then(res => res.json())
    .then(data => {
        console.log(data);

        if (data.is_valid_format.value && data.is_mx_found.value && data.is_smtp_valid.value) {
            document.getElementById('valid').innerHTML = "Valid Email";
        document.getElementById('icon').innerHTML = '<i class="fa-solid fa-check"></i>';
        document.getElementsByClassName('message')[0].style.display = 'block';
        setTimeout(function(){
             document.getElementsByClassName('message')[0].style.display = 'none';
        },4000);
        } else {
             document.getElementById('valid').innerHTML = "please enter a valid email";
        document.getElementById('icon').innerHTML = '<i class="fa-solid fa-xmark"></i>';
        document.getElementsByClassName('message')[0].style.display = 'block';
        setTimeout(function(){
             document.getElementsByClassName('message')[0].style.display = 'none';
        },4000);
        }
    })
    .catch(err => {
        console.error(err);
       
    });
});
