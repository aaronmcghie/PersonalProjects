
var color_array = [0xff0000, 0x00ff00, 0x0000ff];
class Piece {
    constructor(i, j, color, values) {
        this.i = i;
        this.j = j;
        this.color = color;
		this.values = values;
    }
    down() {
        this.j++
    }
    up() {
        this.j--
    }
    left() {
        this.i--;
		for(var i = 0; i<4; i++){
			if ((this.values[i][0]+this.i) < 0) {
				this.i++;
				break;
			}
		}
    }
    right() {
        this.i++;
        for(var i = 0; i<4; i++){
			if ((this.values[i][0]+this.i) > 9) {
				this.i--;
				break;
			}
		}
    }
    draw(matrix) {
        for (var i = 0; i < this.values.length; i++) {
            var cell = matrix[this.i + this.values[i][0]][this.j + this.values[i][1]];
            cell.visible = true;
            cell.color = this.color;
            cell.draw()
        }
    }
    fill(matrix) {
        for (var i = 0; i < this.values.length; i++) {
            var cell = matrix[this.i + this.values[i][0]][this.j + this.values[i][1]];
            cell.visible = true;
            cell.color = this.color;
            cell.filled = true;
            cell.draw()
        }
    }
    conflict(matrix) {
        for (var i = 0; i < this.values.length; i++) {
            var i_offset = this.i + this.values[i][0];
            var j_offset = this.j + this.values[i][1];
            if (j_offset >= 20) return true;
            var cell = matrix[i_offset][j_offset];
            console.log(cell);
            if (cell.filled) return true
        }
        return false
    }
	random_piece(){
		var r = Math.floor(Math.random()*7);
		if (r==0) return new Tetris_Piece(4, 0);
		else if (r==1) return new S_Piece(4, 0);
		else if (r==2) return new Z_Piece(4, 0);
		else if (r==3) return new T_Piece(4, 0);
		else if (r==4) return new Square_Piece(4, 0);
		else if (r==5) return new L_Piece(4, 0);
		else if (r==6) return new J_Piece(4, 0);
	}
}

class Tetris_Piece extends Piece {
	constructor(i, j){
		var color = 0xff0000;
		var values = [
			[0,0],
			[0,1],
			[0,2],
			[0,3]
		];
		super(i, j, color, values);
		this.orientation = 0;
	}
	rotate(){
		if(this.orientation == 0){
			super.values = [
				[0,0],
				[1,0],
				[2,0],
				[3,0]
			];
			this.orientation = 1;
		}
		else{
			super.values = [
				[0,0],
				[0,1],
				[0,2],
				[0,3]
			];
			this.orientation = 0;
		}
	}
}

class S_Piece extends Piece {
	constructor(i, j){
		var color = 0x00ff00;
		var values = [
			[0,0],
			[0,1],
			[1,1],
			[1,2]
		];
		super(i, j, color, values);
		this.orientation = 0;
	}
	rotate(){
		if(this.orientation == 0){
			super.values = [
				[0,1],
				[1,1],
				[1,0],
				[2,0]
			];
			this.orientation = 1;
		}
		else{
			super.values = [
				[0,0],
				[0,1],
				[1,1],
				[1,2]
			];
			this.orientation = 0;
		}
	}
}

class Z_Piece extends Piece {
	constructor(i, j){
		var color = 0x0033cc;
		var values = [
			[0,0],
			[0,1],
			[-1,1],
			[-1,2]
		];
		super(i, j, color, values);
		this.orientation = 0;
	}
	rotate(){
		if(this.orientation == 0){
			super.values = [
				[0,0],
				[1,0],
				[1,1],
				[2,1]
			];
			this.orientation = 1;
		}
		else{
			super.values = [
				[0,0],
				[0,1],
				[-1,1],
				[-1,2]
			];
			this.orientation = 0;
		}
	}
}

class T_Piece extends Piece {
	constructor(i, j){
		var color = 0x9900ff;
		var values = [
			[0,0],
			[0,1],
			[0,2],
			[1,1]
		];
		super(i, j, color, values);
		this.orientation = 0;
	}
	rotate(){
		if(this.orientation == 0){
			super.values = [
				[-1,1],
				[0,1],
				[0,2],
				[1,1]
			];
			this.orientation = 1;
		}
		else if(this.orientation == 1){
			super.values = [
				[0,0],
				[0,1],
				[0,2],
				[-1,1]
			];
			this.orientation = 2;
		}
		else if(this.orientation == 2){
			super.values = [
				[0,0],
				[0,1],
				[-1,1],
				[1,1]
			];
			this.orientation = 3;
		}
		else{
			super.values = [
				[0,0],
				[0,1],
				[0,2],
				[1,1]
			];
			this.orientation = 0;
		}
	}
}

class Square_Piece extends Piece {
	constructor(i, j){
		var color = 0xffff00;
		var values = [
			[0,0],
			[0,1],
			[1,0],
			[1,1]
		];
		super(i, j, color, values);
		this.orientation = 0;
	}
	rotate() {
		
	}
}

class L_Piece extends Piece {
	constructor(i, j){
		var color = 0xff66ff;
		var values = [
			[0,0],
			[0,1],
			[0,2],
			[1,2]
		];
		super(i, j, color, values);
		this.orientation = 0;
	}
	rotate(){
		if(this.orientation == 0){
			super.values = [
				[-1,1],
				[0,1],
				[-1,2],
				[1,1]
			];
			this.orientation = 1;
		}
		else if(this.orientation == 1){
			super.values = [
				[0,0],
				[0,1],
				[0,2],
				[-1,0]
			];
			this.orientation = 2;
		}
		else if(this.orientation == 2){
			super.values = [
				[-1,1],
				[0,1],
				[1,0],
				[1,1]
			];
			this.orientation = 3;
		}
		else{
			super.values = [
				[0,0],
				[0,1],
				[0,2],
				[1,2]
			];
			this.orientation = 0;
		}
	}
}

class J_Piece extends Piece {
	constructor(i, j){
		var color = 0x00ffcc;
		var values = [
			[0,0],
			[0,1],
			[0,2],
			[-1,2]
		];
		super(i, j, color, values);
		this.orientation = 0;
	}
	rotate(){
		if(this.orientation == 0){
			super.values = [
				[-1,1],
				[0,1],
				[-1,0],
				[1,1]
			];
			this.orientation = 1;
		}
		else if(this.orientation == 1){
			super.values = [
				[0,0],
				[0,1],
				[0,2],
				[1,0]
			];
			this.orientation = 2;
		}
		else if(this.orientation == 2){
			super.values = [
				[-1,1],
				[0,1],
				[1,2],
				[1,1]
			];
			this.orientation = 3;
		}
		else{
			super.values = [
				[0,0],
				[0,1],
				[0,2],
				[-1,2]
			];
			this.orientation = 0;
		}
	}
}

class Debug_Piece extends Piece {
	constructor(i, j){
		var color = 0xff9900;
		var values = [
			[0,0],
			[1,0],
			[2,0],
			[3,0],
			[4,0],
			[5,0],
			[6,0],
			[7,0],
			[8,0],
			[9,0]
		];
		super(i, j, color, values);
	}
}

class Cell {
    constructor(container, i, j) {
        this.square = new PIXI.Graphics();
        container.addChild(this.square);
        this.square.x = i * 25;
        this.square.y = j * 25;
        this.square.mouseover = function() {
            console.log("mouse over")
        };
        this.filled = false;
        this.color = 0xffffff
    }
    draw() {
        this.square.clear();
        this.square.beginFill(this.color);
        this.square.drawRect(0, 0, 25, 25);
        this.square.endFill()
    }
    set visible(value) {
        this.square.visible = value
    }
}
class Tetris {
    constructor(stage) {
        console.log("constructor for tetris");
        this.board = new PIXI.Sprite();
        this.outline = new PIXI.Graphics();
        this.board.x = 50;
        this.board.y = 50;
        this.draw_outline();
        this.board.addChild(this.outline);
        this.build_matrix(this.board);
        stage.addChild(this.board);
        this.current_piece = (new Piece()).random_piece();
        this.draw_piece();
        document.addEventListener('keydown', this.handle_key_presses.bind(this));
		this.score = 0;
		this.new_game = false;
		
    }
    handle_key_presses(key) {
        if (key.code == "ArrowDown") {
            this.current_piece.down();
            if (this.current_piece.conflict(this.board_matrix)) {
                this.current_piece.up();
                this.current_piece.fill(this.board_matrix);
				this.check_lines();
                this.current_piece = (new Piece()).random_piece();
				if(this.current_piece.conflict(this.board_matrix)){
					if(this.new_game==false) this.lose();
				}
				if(this.new_game) this.new_game = false;
                this.draw_piece()
            }
        }
        if (key.code == "ArrowLeft") {
            this.current_piece.left();
            if (this.current_piece.conflict(this.board_matrix)) {
                this.current_piece.right()
            }
        }
        if (key.code == "ArrowRight") {
            this.current_piece.right();
            if (this.current_piece.conflict(this.board_matrix)) {
                this.current_piece.left()
            }
        }
		if (key.code == "ArrowUp") {
			this.current_piece.rotate();
			if(this.current_piece.conflict(this.board_matrix)) {
				this.current_piece.rotate();
				if((this.current_piece instanceof L_Piece) ||(this.current_piece instanceof J_Piece) || (this.current_piece instanceof T_Piece)){
					this.current_piece.rotate();
					this.current_piece.rotate();
				}
			}
		}
        this.clear_board();
        this.draw_piece()
    }
    draw_piece() {
        this.current_piece.draw(this.board_matrix)
    }
    build_matrix(container) {
        this.board_matrix = [];
        for (var i = 0; i < 10; i++) {
            this.board_matrix[i] = [];
            for (var j = 0; j < 20; j++) {
                this.board_matrix[i][j] = new Cell(container, i, j);
                this.board_matrix[i][j].visible = false
            }
        }
    }
    clear_board() {
        for (var i = 0; i < 10; i++) {
            for (var j = 0; j < 20; j++) {
                this.board_matrix[i][j].draw();
                if (this.board_matrix[i][j].filled) {
                    this.board_matrix[i][j].visible = true
                } else {
                    this.board_matrix[i][j].visible = false
                }
            }
        }
    }
	check_lines() {
		for (var j = 19; j >= 0; j--) {
			for (var i = 0; i < 10; i++) {
				if((i == 9) && (this.board_matrix[i][j].filled)){
					this.clear_lines(j);
					this.score+=100;
					j++;
				}
				else if(this.board_matrix[i][j].filled == false) break;
			}
		}
	}
	clear_lines(row) {
		for (var j = row; j>=0; j--){
			if(j==0) for(var i = 0; i<10; i++) this.board_matrix[i][j].filled == false;
			else for(var i = 0; i<10; i++) {
				this.board_matrix[i][j].filled = this.board_matrix[i][j-1].filled;
				this.board_matrix[i][j].color = this.board_matrix[i][j-1].color;
			}
			this.clear_board();
		}
	}
	lose() {
		console.log("lose");
		clearInterval(game_timer);
		lose_sprite.position.set(50,200);
		
		new_button.position.set(125, 280);
		
		var style = {
			font : 'bold italic 20px Arial',
			fill : '#F7EDCA',
			stroke : '#4a1850',
			strokeThickness : 5
		};
		
		score_text = new PIXI.Text(this.score, style);
		score_text.x = 150;
		score_text.y = 245;
		
		stage.addChild(lose_sprite);
		stage.addChild(new_game_button);
		stage.addChild(score_text);
	}
	new_game(){
		stage.removeChild(new_button);
		stage.removeChild(lose_sprite);
		stage.removeChild(score_text);
		this.build_matrix(this.board);
		game_timer = setInterval(function() {game_heartbeat(this);}, 200);
		this.score = 0;
		this.new_game=true;
	}
    draw_outline() {
        this.outline.clear();
        this.outline.lineStyle(2, 0xCCCCCC);
        this.outline.beginFill();
        this.outline.drawRect(0, 0, 250, 500);
        this.outline.endFill()
    }
}
var stage;
var renderer;
var game_timer;
var new_button = PIXI.Sprite.fromImage('New_Game_Button.png');
new_button.on('mousedown', this.new_game);
var new_game_button = PIXI.Sprite.fromImage('New_Game_Button.png');
var intro_sprite = PIXI.Sprite.fromImage('Opening_Sprite.png');
var lose_sprite = PIXI.Sprite.fromImage('Lose_Sprite.png');
var score_text;


function after_load() {
    stage = new PIXI.Container();
    stage.interactive = true;
	intro_sprite.position.set(0,0);
	stage.addChild(intro_sprite);
	new_game_button.position.set(125, 280);
	new_game_button.interactive = true;
	new_game_button.on('mousedown', start_game);
	stage.addChild(new_game_button);
	
    renderer = PIXI.autoDetectRenderer(350, 750, null);
    document.body.appendChild(renderer.view);
    requestAnimationFrame(animate);
}

function start_game() {
	stage.removeChild(new_game_button);
	stage.removeChild(intro_sprite);
	var t = new Tetris(stage);
	game_timer = setInterval(function() {game_heartbeat(t);}, 200);
}

function game_heartbeat(t) {
		t.current_piece.down();
        if (t.current_piece.conflict(t.board_matrix)) {
            t.current_piece.up();
            t.current_piece.fill(t.board_matrix);
			t.check_lines();
            t.current_piece = (new Piece()).random_piece();
			if(t.current_piece.conflict(t.board_matrix))t.lose();
            t.draw_piece();
        }
		t.clear_board();
        t.draw_piece();
	}

function animate() {
    requestAnimationFrame(animate);
    renderer.render(stage)
}
after_load();