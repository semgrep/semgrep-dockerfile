(* Generated by ocaml-tree-sitter. *)
(*
   dockerfile grammar

   entrypoint: source_file
*)

open! Sexplib.Conv
open Tree_sitter_run

type pat_from = Token.t (* pattern [fF][rR][oO][mM] *)

type imm_tok_bslashspace = Token.t (* "\\ " *)

type pat_4128122 = Token.t (* pattern [-a-zA-Z0-9\._]+ *)

type pat_label = Token.t (* pattern [lL][aA][bB][eE][lL] *)

type pat_volume = Token.t (* pattern [vV][oO][lL][uU][mM][eE] *)

type pat_f05eb95 = Token.t (* pattern \\[^\n] *)

type imm_tok_colon = Token.t (* ":" *)

type pat_9a14b5c = Token.t (* pattern [-a-zA-Z0-9_]+ *)

type imm_tok_pat_d2727a0 = Token.t (* pattern [a-zA-Z0-9:]+ *)

type pat_expose = Token.t (* pattern [eE][xX][pP][oO][sS][eE] *)

type pat_heal =
  Token.t (* pattern [hH][eE][aA][lL][tT][hH][cC][hH][eE][cC][kK] *)

type pat_env = Token.t (* pattern [eE][nN][vV] *)

type pat_add = Token.t (* pattern [aA][dD][dD] *)

type escape_sequence = Token.t

type imm_tok_pat_24a1611 = Token.t (* pattern "[^\\s\\n\\\"\\\\\\$]+" *)

type pat_entr =
  Token.t (* pattern [eE][nN][tT][rR][yY][pP][oO][iI][nN][tT] *)

type non_newline_whitespace = Token.t (* pattern [\t ]+ *)

type pat_8165e5f = Token.t (* pattern [^@:\s\$-] *)

type pat_run = Token.t (* pattern [rR][uU][nN] *)

type pat_441cd81 = Token.t (* pattern [A-Z0-9]+ *)

type variable = Token.t (* pattern [a-zA-Z][a-zA-Z0-9_]* *)

type imm_tok_dollar = Token.t (* "$" *)

type pat_work = Token.t (* pattern [wW][oO][rR][kK][dD][iI][rR] *)

type imm_tok_pat_589b0f8 = Token.t (* pattern "[^\"\\n\\\\\\$]+" *)

type pat_4fd4a56 = Token.t (* pattern .* *)

type pat_18946a5 = Token.t (* pattern [a-zA-Z]([a-zA-Z0-9_]*[a-zA-Z0-9])? *)

type pat_1167a92 = Token.t (* pattern [^-\s\$] *)

type imm_tok_pat_3d340f6 = Token.t (* pattern \s+ *)

type pat_217c202 = Token.t (* pattern \d+ *)

type pat_stop =
  Token.t (* pattern [sS][tT][oO][pP][sS][iI][gG][nN][aA][lL] *)

type pat_onbu = Token.t (* pattern [oO][nN][bB][uU][iI][lL][dD] *)

type imm_tok_lcurl = Token.t (* "{" *)

type pat_cmd = Token.t (* pattern [cC][mM][dD] *)

type pat_copy = Token.t (* pattern [cC][oO][pP][yY] *)

type imm_tok_rcurl = Token.t (* "}" *)

type pat_arg = Token.t (* pattern [aA][rR][gG] *)

type pat_4b81dfc = Token.t (* pattern [^\\\[\n#\s][^\\\n]* *)

type imm_tok_pat_f6e1de8 = Token.t (* pattern [^\s]+ *)

type pat_b295287 = Token.t (* pattern ([a-z][-a-z0-9_]*|[0-9]+) *)

type imm_tok_pat_bcfc287 = Token.t (* pattern [^@\s\$]+ *)

type pat_as = Token.t (* pattern [aA][sS] *)

type imm_tok_eq = Token.t (* "=" *)

type imm_tok_pat_2b37705 = Token.t (* pattern [^@:\s\$]+ *)

type pat_4a2f38a =
  Token.t (* pattern [cC][rR][oO][sS][sS]_[bB][uU][iI][lL][dD][a-zA-Z_]* *)

type imm_tok_pat_8713919 = Token.t (* pattern [^\}]+ *)

type semgrep_metavariable = Token.t (* pattern \$[A-Z_][A-Z_0-9]* *)

type imm_tok_pat_9a14b5c = Token.t (* pattern [-a-zA-Z0-9_]+ *)

type imm_tok_pat_f43f746 = Token.t (* pattern [a-z][-a-z]* *)

type imm_tok_pat_441cd81 = Token.t (* pattern [A-Z0-9]+ *)

type pat_4de4cb9 = Token.t (* pattern [a-zA-Z0-9_]+ *)

type pat_main =
  Token.t (* pattern [mM][aA][iI][nN][tT][aA][iI][nN][eE][rR] *)

type comment = Token.t (* pattern #.* *)

type pat_user = Token.t (* pattern [uU][sS][eE][rR] *)

type imm_tok_pat_0c7fc22 = Token.t (* pattern [^\s\$]+ *)

type imm_tok_at = Token.t (* "@" *)

type imm_tok_pat_b295287 = Token.t (* pattern ([a-z][-a-z0-9_]*|[0-9]+) *)

type pat_shell = Token.t (* pattern [sS][hH][eE][lL][lL] *)

type anon_comment = (Token.t (* "#" *) * pat_4fd4a56)

type env_key = pat_18946a5

type expose_port = [
    `Semg_ellips of Token.t (* "..." *)
  | `Pat_217c202_opt_choice_SLAS of (
        pat_217c202
      * [
            `SLAS_ce91595 of Token.t (* "/tcp" *)
          | `SLAS_c773c8d of Token.t (* "/udp" *)
        ]
          option
    )
]

type shell_fragment =
  [ `Pat_4b81dfc of pat_4b81dfc | `Pat_f05eb95 of pat_f05eb95 ]
    list (* one or more *)

type cross_build_instruction = (pat_4a2f38a * pat_4fd4a56)

type expansion_body = [
    `Var of variable (*tok*)
  | `Imm_tok_lcurl_imm_tok_pat_8713919_imm_tok_rcurl of (
        imm_tok_lcurl (*tok*) * imm_tok_pat_8713919 * imm_tok_rcurl (*tok*)
    )
]

type param = (
    Token.t (* "--" *) * imm_tok_pat_f43f746 * imm_tok_eq (*tok*)
  * imm_tok_pat_f6e1de8
)

type maintainer_instruction = (pat_main * pat_4fd4a56)

type comment_line = (anon_comment * Token.t (* "\n" *))

type expansion = (Token.t (* "$" *) * expansion_body)

type imm_expansion = (imm_tok_dollar (*tok*) * expansion_body)

type shell_command = [
    `Semg_ellips of Token.t (* "..." *)
  | `Rep_comm_line_shell_frag_rep_requ_line_cont_rep_comm_line_shell_frag of (
        comment_line list (* zero or more *)
      * shell_fragment
      * (
            Token.t (* "\\\n" *)
          * comment_line list (* zero or more *)
          * shell_fragment
        )
          list (* zero or more *)
    )
]

type expose_instruction = (
    pat_expose
  * [ `Expose_port of expose_port | `Expa of expansion ]
      list (* one or more *)
)

type immediate_expansion = imm_expansion

type unquoted_string =
  [
      `Imm_tok_pat_24a1611 of imm_tok_pat_24a1611
    | `Imm_tok_bsla of imm_tok_bslashspace (*tok*)
    | `Imme_expa of immediate_expansion
  ]
    list (* one or more *)

type image_name = (
    [ `Pat_8165e5f of pat_8165e5f | `Expa of expansion ]
  * [
        `Imm_tok_pat_2b37705 of imm_tok_pat_2b37705
      | `Imme_expa of immediate_expansion
    ]
      list (* zero or more *)
)

type stopsignal_value = (
    [ `Pat_441cd81 of pat_441cd81 | `Expa of expansion ]
  * [
        `Imm_tok_pat_441cd81 of imm_tok_pat_441cd81
      | `Imme_expa of immediate_expansion
    ]
      list (* zero or more *)
)

type image_alias = (
    [ `Pat_9a14b5c of pat_9a14b5c | `Expa of expansion ]
  * [
        `Imm_tok_pat_9a14b5c of imm_tok_pat_9a14b5c
      | `Imme_expa of immediate_expansion
    ]
      list (* zero or more *)
)

type image_digest = (
    imm_tok_at (*tok*)
  * [
        `Imm_tok_pat_d2727a0 of imm_tok_pat_d2727a0
      | `Imme_expa of immediate_expansion
    ]
      list (* one or more *)
)

type double_quoted_string = (
    Token.t (* "\"" *)
  * [
        `Imm_tok_pat_589b0f8 of imm_tok_pat_589b0f8
      | `Esc_seq of escape_sequence (*tok*)
      | `Imme_expa of immediate_expansion
    ]
      list (* zero or more *)
  * Token.t (* "\"" *)
)

type immediate_user_name_or_group_fragment = [
    `Imm_tok_pat_b295287 of imm_tok_pat_b295287
  | `Imme_expa of immediate_expansion
]

type image_tag = (
    imm_tok_colon (*tok*)
  * [
        `Imm_tok_pat_bcfc287 of imm_tok_pat_bcfc287
      | `Imme_expa of immediate_expansion
    ]
      list (* one or more *)
)

type path = (
    [ `Pat_1167a92 of pat_1167a92 | `Expa of expansion ]
  * [
        `Imm_tok_pat_0c7fc22 of imm_tok_pat_0c7fc22
      | `Imme_expa of immediate_expansion
    ]
      list (* zero or more *)
)

type stopsignal_instruction = (pat_stop * stopsignal_value)

type anon_choice_double_quoted_str_6b200ac = [
    `Double_quoted_str of double_quoted_string
  | `Unqu_str of unquoted_string
]

type array_element = [
    `Double_quoted_str of double_quoted_string
  | `Semg_ellips of Token.t (* "..." *)
  | `Semg_meta of semgrep_metavariable (*tok*)
]

type immediate_user_name_or_group =
  immediate_user_name_or_group_fragment list (* one or more *)

type user_name_or_group = (
    [ `Pat_b295287 of pat_b295287 | `Expa of expansion ]
  * immediate_user_name_or_group_fragment list (* zero or more *)
)

type image_spec = (image_name * image_tag option * image_digest option)

type workdir_instruction = (pat_work * path)

type copy_instruction = (
    pat_copy
  * param option
  * (path * non_newline_whitespace (*tok*)) list (* one or more *)
  * path
)

type add_instruction = (
    pat_add
  * param option
  * (path * non_newline_whitespace (*tok*)) list (* one or more *)
  * path
)

type arg_instruction = (
    pat_arg
  * [
        `Semg_meta of semgrep_metavariable (*tok*)
      | `Pat_4de4cb9 of pat_4de4cb9
    ]
  * (imm_tok_eq (*tok*) * anon_choice_double_quoted_str_6b200ac) option
)

type env_pair = [
    `Semg_ellips of Token.t (* "..." *)
  | `Env_key_imm_tok_eq_opt_choice_double_quoted_str of (
        env_key
      * imm_tok_eq (*tok*)
      * anon_choice_double_quoted_str_6b200ac option
    )
]

type label_pair = [
    `Semg_ellips of Token.t (* "..." *)
  | `Choice_semg_meta_imm_tok_eq_choice_double_quoted_str of (
        [
            `Semg_meta of semgrep_metavariable (*tok*)
          | `Pat_4128122 of pat_4128122
        ]
      * imm_tok_eq (*tok*)
      * anon_choice_double_quoted_str_6b200ac
    )
]

type spaced_env_pair = (
    env_key * imm_tok_pat_3d340f6 * anon_choice_double_quoted_str_6b200ac
)

type string_array = (
    Token.t (* "[" *)
  * (
        array_element
      * (Token.t (* "," *) * array_element) list (* zero or more *)
    )
      option
  * Token.t (* "]" *)
)

type user_instruction = (
    pat_user
  * user_name_or_group
  * (imm_tok_colon (*tok*) * immediate_user_name_or_group) option
)

type from_instruction = (
    pat_from
  * param option
  * image_spec
  * (pat_as * image_alias) option
)

type label_instruction = (pat_label * label_pair list (* one or more *))

type env_instruction = (
    pat_env
  * [
        `Rep1_env_pair of env_pair list (* one or more *)
      | `Spaced_env_pair of spaced_env_pair
    ]
)

type volume_instruction = (
    pat_volume
  * [
        `Str_array of string_array
      | `Path_rep_non_nl_whit_path of (
            path
          * (non_newline_whitespace (*tok*) * path) list (* zero or more *)
        )
    ]
)

type shell_instruction = (pat_shell * string_array)

type anon_choice_str_array_878ad0b = [
    `Str_array of string_array
  | `Shell_cmd of shell_command
]

type entrypoint_instruction = (pat_entr * anon_choice_str_array_878ad0b)

type cmd_instruction = (pat_cmd * anon_choice_str_array_878ad0b)

type run_instruction = (pat_run * anon_choice_str_array_878ad0b)

type healthcheck_instruction = (
    pat_heal
  * [
        `Semg_meta of semgrep_metavariable (*tok*)
      | `NONE of Token.t (* "NONE" *)
      | `Rep_param_cmd_inst of (
            param list (* zero or more *)
          * cmd_instruction
        )
    ]
)

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

and onbuild_instruction = (pat_onbu * instruction)

type source_file =
  ([ `Inst of instruction | `Comm of comment (*tok*) ] * Token.t (* "\n" *))
    list (* zero or more *)

type semgrep_ellipsis (* inlined *) = Token.t (* "..." *)

type line_continuation (* inlined *) = Token.t (* "\\\n" *)

type required_line_continuation (* inlined *) = Token.t (* "\\\n" *)
