$(document).ready(function(){
//	$('#title').hover(function(){
//		$('#title').animate({border-color: "green"}, 1000);
//	});
//The above code is to animate a "click here" type of deal, where it prompts the user to click to play the game.
	
	$('#title').click(function(){
		$('#title').animate({opacity: 0.0, top: "-500px"}, 2000);
		$('#gameScreen').animate({opacity: 1.0, 
			bottom: "550px",
			width: "1000px",
			height: "500px"}, 2500)
	});
});