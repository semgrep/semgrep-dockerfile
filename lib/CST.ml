(* Generated by ocaml-tree-sitter. *)
(*
   dockerfile grammar

   entrypoint: source_file
*)

open! Sexplib.Conv
open Tree_sitter_run

type imm_tok_pat_f43f746 = Token.t (* pattern [a-z][-a-z]* *)
[@@deriving sexp_of]

type pat_441cd81 = Token.t (* pattern [A-Z0-9]+ *)
[@@deriving sexp_of]

type pat_433746d = Token.t (* pattern [lL][aA][bB][eE][lL] *)
[@@deriving sexp_of]

type pat_4b81dfc = Token.t (* pattern [^\\\[\n#\s][^\\\n]* *)
[@@deriving sexp_of]

type pat_9c0a769 = Token.t (* pattern [cC][oO][pP][yY] *)
[@@deriving sexp_of]

type pat_56bd329 =
  Token.t (* pattern [sS][tT][oO][pP][sS][iI][gG][nN][aA][lL] *)
[@@deriving sexp_of]

type imm_tok_pat_bcfc287 = Token.t (* pattern [^@\s\$]+ *)
[@@deriving sexp_of]

type pat_8713919 = Token.t (* pattern [^\}]+ *)
[@@deriving sexp_of]

type pat_808c5a1 =
  Token.t (* pattern [eE][nN][tT][rR][yY][pP][oO][iI][nN][tT] *)
[@@deriving sexp_of]

type pat_79b8891 = Token.t (* pattern [aA][sS] *)
[@@deriving sexp_of]

type imm_tok_pat_24a1611 = Token.t (* pattern "[^\\s\\n\\\"\\\\\\$]+" *)
[@@deriving sexp_of]

type pat_5cf3c2c =
  Token.t (* pattern [mM][aA][iI][nN][tT][aA][iI][nN][eE][rR] *)
[@@deriving sexp_of]

type semgrep_metavariable = Token.t (* pattern \$[A-Z_][A-Z_0-9]* *)
[@@deriving sexp_of]

type pat_845d48b = Token.t (* pattern [a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9] *)
[@@deriving sexp_of]

type imm_tok_pat_d2727a0 = Token.t (* pattern [a-zA-Z0-9:]+ *)
[@@deriving sexp_of]

type pat_660c06c = Token.t (* pattern [a-z][-a-z0-9_]* *)
[@@deriving sexp_of]

type pat_a6040bb = Token.t (* pattern [wW][oO][rR][kK][dD][iI][rR] *)
[@@deriving sexp_of]

type pat_fd0037e =
  Token.t (* pattern [hH][eE][aA][lL][tT][hH][cC][hH][eE][cC][kK] *)
[@@deriving sexp_of]

type pat_4128122 = Token.t (* pattern [-a-zA-Z0-9\._]+ *)
[@@deriving sexp_of]

type pat_ed84199 = Token.t (* pattern [aA][dD][dD] *)
[@@deriving sexp_of]

type pat_217c202 = Token.t (* pattern \d+ *)
[@@deriving sexp_of]

type pat_4fd4a56 = Token.t (* pattern .* *)
[@@deriving sexp_of]

type imm_tok_pat_3d340f6 = Token.t (* pattern \s+ *)
[@@deriving sexp_of]

type pat_4de4cb9 = Token.t (* pattern [a-zA-Z0-9_]+ *)
[@@deriving sexp_of]

type pat_985c208 = Token.t (* pattern [aA][rR][gG] *)
[@@deriving sexp_of]

type pat_2b37705 = Token.t (* pattern [^@:\s\$]+ *)
[@@deriving sexp_of]

type pat_f2a2f8f = Token.t (* pattern [rR][uU][nN] *)
[@@deriving sexp_of]

type pat_1c663f5 = Token.t (* pattern [vV][oO][lL][uU][mM][eE] *)
[@@deriving sexp_of]

type pat_aa82a08 = Token.t (* pattern [oO][nN][bB][uU][iI][lL][dD] *)
[@@deriving sexp_of]

type variable = Token.t (* pattern [a-zA-Z][a-zA-Z0-9_]* *)
[@@deriving sexp_of]

type escape_sequence = Token.t
[@@deriving sexp_of]

type pat_f05eb95 = Token.t (* pattern \\[^\n] *)
[@@deriving sexp_of]

type imm_tok_pat_f6e1de8 = Token.t (* pattern [^\s]+ *)
[@@deriving sexp_of]

type pat_9818882 = Token.t (* pattern [eE][xX][pP][oO][sS][eE] *)
[@@deriving sexp_of]

type pat_5eaae97 = Token.t (* pattern [fF][rR][oO][mM] *)
[@@deriving sexp_of]

type pat_a368b76 = Token.t (* pattern [uU][sS][eE][rR] *)
[@@deriving sexp_of]

type pat_030af88 = Token.t (* pattern [eE][nN][vV] *)
[@@deriving sexp_of]

type pat_0c7fc22 = Token.t (* pattern [^\s\$]+ *)
[@@deriving sexp_of]

type pat_239fcac = Token.t (* pattern [cC][mM][dD] *)
[@@deriving sexp_of]

type pat_9374c10 = Token.t (* pattern [sS][hH][eE][lL][lL] *)
[@@deriving sexp_of]

type non_newline_whitespace = Token.t (* pattern [\t ]+ *)
[@@deriving sexp_of]

type pat_9a14b5c = Token.t (* pattern [-a-zA-Z0-9_]+ *)
[@@deriving sexp_of]

type comment = Token.t (* pattern #.* *)
[@@deriving sexp_of]

type pat_4a2f38a =
  Token.t (* pattern [cC][rR][oO][sS][sS]_[bB][uU][iI][lL][dD][a-zA-Z_]* *)
[@@deriving sexp_of]

type imm_tok_pat_589b0f8 = Token.t (* pattern "[^\"\\n\\\\\\$]+" *)
[@@deriving sexp_of]

type pat_1167a92 = Token.t (* pattern [^-\s\$] *)
[@@deriving sexp_of]

type expose_port = (
    pat_217c202 (*tok*)
  * [
        `SLAS_ce91595 of Token.t (* "/tcp" *)
      | `SLAS_c773c8d of Token.t (* "/udp" *)
    ]
      option
)
[@@deriving sexp_of]

type maintainer_instruction = (pat_5cf3c2c (*tok*) * pat_4fd4a56 (*tok*))
[@@deriving sexp_of]

type anon_comment = (Token.t (* "#" *) * pat_4fd4a56 (*tok*))
[@@deriving sexp_of]

type expansion = (
    Token.t (* "$" *)
  * [
        `Var of variable (*tok*)
      | `LCURL_pat_8713919_RCURL of (
            Token.t (* "{" *) * pat_8713919 (*tok*) * Token.t (* "}" *)
        )
    ]
)
[@@deriving sexp_of]

type shell_fragment =
  [
      `Pat_4b81dfc of pat_4b81dfc (*tok*)
    | `Pat_f05eb95 of pat_f05eb95 (*tok*)
  ]
    list (* one or more *)
[@@deriving sexp_of]

type param = (
    Token.t (* "--" *) * imm_tok_pat_f43f746 (*tok*) * Token.t (* "=" *)
  * imm_tok_pat_f6e1de8 (*tok*)
)
[@@deriving sexp_of]

type cross_build_instruction = (pat_4a2f38a (*tok*) * pat_4fd4a56 (*tok*))
[@@deriving sexp_of]

type comment_line = (anon_comment * Token.t (* "\n" *))
[@@deriving sexp_of]

type expose_instruction = (
    pat_9818882 (*tok*)
  * [ `Expose_port of expose_port | `Expa of expansion ]
      list (* one or more *)
)
[@@deriving sexp_of]

type user_name_or_group =
  [ `Pat_660c06c of pat_660c06c (*tok*) | `Expa of expansion ]
    list (* one or more *)
[@@deriving sexp_of]

type path = (
    [ `Pat_1167a92 of pat_1167a92 (*tok*) | `Expa of expansion ]
  * [ `Pat_0c7fc22 of pat_0c7fc22 (*tok*) | `Expa of expansion ]
      list (* zero or more *)
)
[@@deriving sexp_of]

type image_alias =
  [ `Pat_9a14b5c of pat_9a14b5c (*tok*) | `Expa of expansion ]
    list (* one or more *)
[@@deriving sexp_of]

type image_digest = (
    Token.t (* "@" *)
  * [
        `Imm_tok_pat_d2727a0 of imm_tok_pat_d2727a0 (*tok*)
      | `Expa of expansion
    ]
      list (* one or more *)
)
[@@deriving sexp_of]

type image_name =
  [ `Pat_2b37705 of pat_2b37705 (*tok*) | `Expa of expansion ]
    list (* one or more *)
[@@deriving sexp_of]

type image_tag = (
    Token.t (* ":" *)
  * [
        `Imm_tok_pat_bcfc287 of imm_tok_pat_bcfc287 (*tok*)
      | `Expa of expansion
    ]
      list (* one or more *)
)
[@@deriving sexp_of]

type double_quoted_string = (
    Token.t (* "\"" *)
  * [
        `Imm_tok_pat_589b0f8 of imm_tok_pat_589b0f8 (*tok*)
      | `Esc_seq of escape_sequence (*tok*)
      | `Expa of expansion
    ]
      list (* zero or more *)
  * Token.t (* "\"" *)
)
[@@deriving sexp_of]

type unquoted_string =
  [
      `Imm_tok_pat_24a1611 of imm_tok_pat_24a1611 (*tok*)
    | `BSLASHSPACE of Token.t (* "\\ " *)
    | `Expa of expansion
  ]
    list (* one or more *)
[@@deriving sexp_of]

type stopsignal_value =
  [ `Pat_441cd81 of pat_441cd81 (*tok*) | `Expa of expansion ]
    list (* one or more *)
[@@deriving sexp_of]

type user_instruction = (
    pat_a368b76 (*tok*)
  * user_name_or_group
  * (Token.t (* ":" *) * user_name_or_group) option
)
[@@deriving sexp_of]

type workdir_instruction = (pat_a6040bb (*tok*) * path)
[@@deriving sexp_of]

type add_instruction = (
    pat_ed84199 (*tok*)
  * param option
  * path
  * non_newline_whitespace (*tok*)
  * path
)
[@@deriving sexp_of]

type copy_instruction = (
    pat_9c0a769 (*tok*)
  * param option
  * path
  * non_newline_whitespace (*tok*)
  * path
)
[@@deriving sexp_of]

type image_spec = (image_name * image_tag option * image_digest option)
[@@deriving sexp_of]

type array_element = [
    `Double_quoted_str of double_quoted_string
  | `Semg_ellips of Token.t (* "..." *)
  | `Semg_meta of semgrep_metavariable (*tok*)
]
[@@deriving sexp_of]

type anon_choice_double_quoted_str_6b200ac = [
    `Double_quoted_str of double_quoted_string
  | `Unqu_str of unquoted_string
]
[@@deriving sexp_of]

type stopsignal_instruction = (pat_56bd329 (*tok*) * stopsignal_value)
[@@deriving sexp_of]

type from_instruction = (
    pat_5eaae97 (*tok*)
  * param option
  * image_spec
  * (pat_79b8891 (*tok*) * image_alias) option
)
[@@deriving sexp_of]

type string_array = (
    Token.t (* "[" *)
  * (
        array_element
      * (Token.t (* "," *) * array_element) list (* zero or more *)
    )
      option
  * Token.t (* "]" *)
)
[@@deriving sexp_of]

type arg_instruction = (
    pat_985c208 (*tok*)
  * pat_4de4cb9 (*tok*)
  * (Token.t (* "=" *) * anon_choice_double_quoted_str_6b200ac) option
)
[@@deriving sexp_of]

type env_pair = (
    pat_845d48b (*tok*) * Token.t (* "=" *)
  * anon_choice_double_quoted_str_6b200ac
)
[@@deriving sexp_of]

type spaced_env_pair = (
    pat_845d48b (*tok*) * imm_tok_pat_3d340f6 (*tok*)
  * anon_choice_double_quoted_str_6b200ac
)
[@@deriving sexp_of]

type label_pair = (
    pat_4128122 (*tok*) * Token.t (* "=" *)
  * anon_choice_double_quoted_str_6b200ac
)
[@@deriving sexp_of]

type shell_instruction = (pat_9374c10 (*tok*) * string_array)
[@@deriving sexp_of]

type volume_instruction = (
    pat_1c663f5 (*tok*)
  * [
        `Str_array of string_array
      | `Path_rep_non_nl_whit_path of (
            path
          * (non_newline_whitespace (*tok*) * path) list (* zero or more *)
        )
    ]
)
[@@deriving sexp_of]

type anon_choice_str_array_878ad0b = [
    `Str_array of string_array
  | `Shell_cmd of (
        shell_fragment
      * (
            Token.t (* "\\\n" *)
          * comment_line list (* zero or more *)
          * shell_fragment
        )
          list (* zero or more *)
    )
]
[@@deriving sexp_of]

type env_instruction = (
    pat_030af88 (*tok*)
  * [
        `Rep1_env_pair of env_pair list (* one or more *)
      | `Spaced_env_pair of spaced_env_pair
    ]
)
[@@deriving sexp_of]

type label_instruction = (
    pat_433746d (*tok*)
  * label_pair list (* one or more *)
)
[@@deriving sexp_of]

type cmd_instruction = (pat_239fcac (*tok*) * anon_choice_str_array_878ad0b)
[@@deriving sexp_of]

type entrypoint_instruction = (
    pat_808c5a1 (*tok*) * anon_choice_str_array_878ad0b
)
[@@deriving sexp_of]

type run_instruction = (pat_f2a2f8f (*tok*) * anon_choice_str_array_878ad0b)
[@@deriving sexp_of]

type healthcheck_instruction = (
    pat_fd0037e (*tok*)
  * [
        `NONE of Token.t (* "NONE" *)
      | `Rep_param_cmd_inst of (
            param list (* zero or more *)
          * cmd_instruction
        )
    ]
)
[@@deriving sexp_of]

type instruction = [
    `Semg_ellips of Token.t (* "..." *)
  | `Semg_meta of semgrep_metavariable (*tok*)
  | `Choice_from_inst of [
        `From_inst of from_instruction
      | `Run_inst of run_instruction
      | `Cmd_inst of cmd_instruction
      | `Label_inst of label_instruction
      | `Expose_inst of expose_instruction
      | `Env_inst of env_instruction
      | `Add_inst of add_instruction
      | `Copy_inst of copy_instruction
      | `Entr_inst of entrypoint_instruction
      | `Volume_inst of volume_instruction
      | `User_inst of user_instruction
      | `Work_inst of workdir_instruction
      | `Arg_inst of arg_instruction
      | `Onbu_inst of onbuild_instruction
      | `Stop_inst of stopsignal_instruction
      | `Heal_inst of healthcheck_instruction
      | `Shell_inst of shell_instruction
      | `Main_inst of maintainer_instruction
      | `Cross_build_inst of cross_build_instruction
    ]
]

and onbuild_instruction = (pat_aa82a08 (*tok*) * instruction)
[@@deriving sexp_of]

type source_file =
  ([ `Inst of instruction | `Comm of comment (*tok*) ] * Token.t (* "\n" *))
    list (* zero or more *)
[@@deriving sexp_of]

type semgrep_ellipsis (* inlined *) = Token.t (* "..." *)
[@@deriving sexp_of]

type line_continuation (* inlined *) = Token.t (* "\\\n" *)
[@@deriving sexp_of]

type required_line_continuation (* inlined *) = Token.t (* "\\\n" *)
[@@deriving sexp_of]

type env_key (* inlined *) = pat_845d48b (*tok*)
[@@deriving sexp_of]

type shell_command (* inlined *) = (
    shell_fragment
  * (
        Token.t (* "\\\n" *)
      * comment_line list (* zero or more *)
      * shell_fragment
    )
      list (* zero or more *)
)
[@@deriving sexp_of]

let dump_tree root =
  sexp_of_source_file root
  |> Print_sexp.to_stdout
