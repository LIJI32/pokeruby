RustboroCity_PokemonSchool_MapScripts:: @ 81579E1
	.byte 0

RustboroCity_PokemonSchool_EventScript_1579E2:: @ 81579E2
	lockall
	msgbox RustboroCity_PokemonSchool_Text_184321, 4
	goto RustboroCity_PokemonSchool_EventScript_1579F1
	end

RustboroCity_PokemonSchool_EventScript_1579F1:: @ 81579F1
	message RustboroCity_PokemonSchool_Text_184368
	waitmessage
	multichoicegrid 8, 1, 13, 3, 0
	switch RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_157A50
	case 1, RustboroCity_PokemonSchool_EventScript_157A5E
	case 2, RustboroCity_PokemonSchool_EventScript_157A6C
	case 3, RustboroCity_PokemonSchool_EventScript_157A7A
	case 4, RustboroCity_PokemonSchool_EventScript_157A88
	case 5, RustboroCity_PokemonSchool_EventScript_157A96
	case 127, RustboroCity_PokemonSchool_EventScript_157A96
	end

RustboroCity_PokemonSchool_EventScript_157A50:: @ 8157A50
	msgbox RustboroCity_PokemonSchool_Text_184389, 4
	goto RustboroCity_PokemonSchool_EventScript_1579F1
	end

RustboroCity_PokemonSchool_EventScript_157A5E:: @ 8157A5E
	msgbox RustboroCity_PokemonSchool_Text_184447, 4
	goto RustboroCity_PokemonSchool_EventScript_1579F1
	end

RustboroCity_PokemonSchool_EventScript_157A6C:: @ 8157A6C
	msgbox RustboroCity_PokemonSchool_Text_1844EC, 4
	goto RustboroCity_PokemonSchool_EventScript_1579F1
	end

RustboroCity_PokemonSchool_EventScript_157A7A:: @ 8157A7A
	msgbox RustboroCity_PokemonSchool_Text_1845A5, 4
	goto RustboroCity_PokemonSchool_EventScript_1579F1
	end

RustboroCity_PokemonSchool_EventScript_157A88:: @ 8157A88
	msgbox RustboroCity_PokemonSchool_Text_184627, 4
	goto RustboroCity_PokemonSchool_EventScript_1579F1
	end

RustboroCity_PokemonSchool_EventScript_157A96:: @ 8157A96
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_157A98:: @ 8157A98
	msgbox RustboroCity_PokemonSchool_Text_18480E, 2
	end

RustboroCity_PokemonSchool_EventScript_157AA1:: @ 8157AA1
	msgbox RustboroCity_PokemonSchool_Text_18483C, 2
	end

RustboroCity_PokemonSchool_EventScript_157AAA:: @ 8157AAA
	msgbox RustboroCity_PokemonSchool_Text_184873, 2
	end

RustboroCity_PokemonSchool_EventScript_157AB3:: @ 8157AB3
	msgbox RustboroCity_PokemonSchool_Text_1848D8, 2
	end

RustboroCity_PokemonSchool_EventScript_157ABC:: @ 8157ABC
	msgbox RustboroCity_PokemonSchool_Text_184988, 2
	end

RustboroCity_PokemonSchool_EventScript_157AC5:: @ 8157AC5
	msgbox RustboroCity_PokemonSchool_Text_184A17, 3
	end

RustboroCity_PokemonSchool_EventScript_157ACE:: @ 8157ACE
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_157B34
	compare FACING, 4
	call_if_eq RustboroCity_PokemonSchool_EventScript_157B1E
	compare FACING, 3
	call_if_eq RustboroCity_PokemonSchool_EventScript_157B29
	msgbox RustboroCity_PokemonSchool_Text_1846A2, 4
	giveitem_std ITEM_QUICK_CLAW
	compare RESULT, 0
	goto_if_eq RustboroCity_PokemonSchool_EventScript_1A029B
	closemessage
	applymovement LAST_TALKED, RustboroCity_PokemonSchool_Movement_1A0845
	waitmovement 0
	setflag FLAG_RECEIVED_QUICK_CLAW
	release
	end

RustboroCity_PokemonSchool_EventScript_157B1E:: @ 8157B1E
	applymovement LAST_TALKED, RustboroCity_PokemonSchool_Movement_157B60
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_157B29:: @ 8157B29
	applymovement LAST_TALKED, RustboroCity_PokemonSchool_Movement_157B49
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_157B34:: @ 8157B34
	msgbox RustboroCity_PokemonSchool_Text_184737, 4
	closemessage
	applymovement LAST_TALKED, RustboroCity_PokemonSchool_Movement_1A0845
	waitmovement 0
	release
	end

RustboroCity_PokemonSchool_Movement_157B49:: @ 8157B49
	step_left
	step_down
	step_down
	step_right
	step_25
	step_14
	step_14
	step_14
	step_down
	step_27
	step_14
	step_14
	step_right
	step_14
	step_14
	step_13
	step_up
	step_left
	step_left
	step_up
	step_up
	step_right
	step_end

RustboroCity_PokemonSchool_Movement_157B60:: @ 8157B60
	step_right
	step_right
	step_down
	step_down
	step_left
	step_left
	step_25
	step_14
	step_14
	step_14
	step_down
	step_27
	step_14
	step_14
	step_right
	step_14
	step_14
	step_13
	step_up
	step_right
	step_up
	step_up
	step_left
	step_left
	step_end
