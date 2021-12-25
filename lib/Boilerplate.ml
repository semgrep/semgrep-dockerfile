(**
   Boilerplate to be used as a template when mapping the dockerfile CST
   to another type of tree.
*)

(* Disable warnings against unused variables *)
[@@@warning "-26-27"]

(* Disable warning against unused 'rec' *)
[@@@warning "-39"]

type env = unit

let token (env : env) (_tok : Tree_sitter_run.Token.t) =
  failwith "not implemented"

let blank (env : env) () =
  failwith "not implemented"

let todo (env : env) _ =
   failwith "not implemented"

let map_imm_tok_pat_f43f746 (env : env) (tok : CST.imm_tok_pat_f43f746) =
  (* pattern [a-z][-a-z]* *) token env tok

let map_pat_441cd81 (env : env) (tok : CST.pat_441cd81) =
  (* pattern [A-Z0-9]+ *) token env tok

let map_pat_433746d (env : env) (tok : CST.pat_433746d) =
  (* pattern [lL][aA][bB][eE][lL] *) token env tok

let map_pat_4b81dfc (env : env) (tok : CST.pat_4b81dfc) =
  (* pattern [^\\\[\n#\s][^\\\n]* *) token env tok

let map_pat_9c0a769 (env : env) (tok : CST.pat_9c0a769) =
  (* pattern [cC][oO][pP][yY] *) token env tok

let map_pat_56bd329 (env : env) (tok : CST.pat_56bd329) =
  (* pattern [sS][tT][oO][pP][sS][iI][gG][nN][aA][lL] *) token env tok

let map_imm_tok_pat_bcfc287 (env : env) (tok : CST.imm_tok_pat_bcfc287) =
  (* pattern [^@\s\$]+ *) token env tok

let map_pat_8713919 (env : env) (tok : CST.pat_8713919) =
  (* pattern [^\}]+ *) token env tok

let map_pat_808c5a1 (env : env) (tok : CST.pat_808c5a1) =
  (* pattern [eE][nN][tT][rR][yY][pP][oO][iI][nN][tT] *) token env tok

let map_pat_79b8891 (env : env) (tok : CST.pat_79b8891) =
  (* pattern [aA][sS] *) token env tok

let map_imm_tok_pat_24a1611 (env : env) (tok : CST.imm_tok_pat_24a1611) =
  (* pattern "[^\\s\\n\\\"\\\\\\$]+" *) token env tok

let map_pat_5cf3c2c (env : env) (tok : CST.pat_5cf3c2c) =
  (* pattern [mM][aA][iI][nN][tT][aA][iI][nN][eE][rR] *) token env tok

let map_semgrep_metavariable (env : env) (tok : CST.semgrep_metavariable) =
  (* pattern \$[A-Z_][A-Z_0-9]* *) token env tok

let map_pat_845d48b (env : env) (tok : CST.pat_845d48b) =
  (* pattern [a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9] *) token env tok

let map_imm_tok_pat_d2727a0 (env : env) (tok : CST.imm_tok_pat_d2727a0) =
  (* pattern [a-zA-Z0-9:]+ *) token env tok

let map_pat_660c06c (env : env) (tok : CST.pat_660c06c) =
  (* pattern [a-z][-a-z0-9_]* *) token env tok

let map_pat_a6040bb (env : env) (tok : CST.pat_a6040bb) =
  (* pattern [wW][oO][rR][kK][dD][iI][rR] *) token env tok

let map_pat_fd0037e (env : env) (tok : CST.pat_fd0037e) =
  (* pattern [hH][eE][aA][lL][tT][hH][cC][hH][eE][cC][kK] *) token env tok

let map_pat_4128122 (env : env) (tok : CST.pat_4128122) =
  (* pattern [-a-zA-Z0-9\._]+ *) token env tok

let map_pat_ed84199 (env : env) (tok : CST.pat_ed84199) =
  (* pattern [aA][dD][dD] *) token env tok

let map_pat_217c202 (env : env) (tok : CST.pat_217c202) =
  (* pattern \d+ *) token env tok

let map_pat_4fd4a56 (env : env) (tok : CST.pat_4fd4a56) =
  (* pattern .* *) token env tok

let map_imm_tok_pat_3d340f6 (env : env) (tok : CST.imm_tok_pat_3d340f6) =
  (* pattern \s+ *) token env tok

let map_pat_4de4cb9 (env : env) (tok : CST.pat_4de4cb9) =
  (* pattern [a-zA-Z0-9_]+ *) token env tok

let map_pat_985c208 (env : env) (tok : CST.pat_985c208) =
  (* pattern [aA][rR][gG] *) token env tok

let map_pat_2b37705 (env : env) (tok : CST.pat_2b37705) =
  (* pattern [^@:\s\$]+ *) token env tok

let map_pat_f2a2f8f (env : env) (tok : CST.pat_f2a2f8f) =
  (* pattern [rR][uU][nN] *) token env tok

let map_pat_1c663f5 (env : env) (tok : CST.pat_1c663f5) =
  (* pattern [vV][oO][lL][uU][mM][eE] *) token env tok

let map_pat_aa82a08 (env : env) (tok : CST.pat_aa82a08) =
  (* pattern [oO][nN][bB][uU][iI][lL][dD] *) token env tok

let map_variable (env : env) (tok : CST.variable) =
  (* pattern [a-zA-Z][a-zA-Z0-9_]* *) token env tok

let map_escape_sequence (env : env) (tok : CST.escape_sequence) =
  (* escape_sequence *) token env tok

let map_pat_f05eb95 (env : env) (tok : CST.pat_f05eb95) =
  (* pattern \\[^\n] *) token env tok

let map_imm_tok_pat_f6e1de8 (env : env) (tok : CST.imm_tok_pat_f6e1de8) =
  (* pattern [^\s]+ *) token env tok

let map_pat_9818882 (env : env) (tok : CST.pat_9818882) =
  (* pattern [eE][xX][pP][oO][sS][eE] *) token env tok

let map_pat_5eaae97 (env : env) (tok : CST.pat_5eaae97) =
  (* pattern [fF][rR][oO][mM] *) token env tok

let map_pat_a368b76 (env : env) (tok : CST.pat_a368b76) =
  (* pattern [uU][sS][eE][rR] *) token env tok

let map_pat_030af88 (env : env) (tok : CST.pat_030af88) =
  (* pattern [eE][nN][vV] *) token env tok

let map_pat_0c7fc22 (env : env) (tok : CST.pat_0c7fc22) =
  (* pattern [^\s\$]+ *) token env tok

let map_pat_239fcac (env : env) (tok : CST.pat_239fcac) =
  (* pattern [cC][mM][dD] *) token env tok

let map_pat_9374c10 (env : env) (tok : CST.pat_9374c10) =
  (* pattern [sS][hH][eE][lL][lL] *) token env tok

let map_non_newline_whitespace (env : env) (tok : CST.non_newline_whitespace) =
  (* pattern [\t ]+ *) token env tok

let map_pat_9a14b5c (env : env) (tok : CST.pat_9a14b5c) =
  (* pattern [-a-zA-Z0-9_]+ *) token env tok

let map_comment (env : env) (tok : CST.comment) =
  (* pattern #.* *) token env tok

let map_pat_4a2f38a (env : env) (tok : CST.pat_4a2f38a) =
  (* pattern [cC][rR][oO][sS][sS]_[bB][uU][iI][lL][dD][a-zA-Z_]* *) token env tok

let map_imm_tok_pat_589b0f8 (env : env) (tok : CST.imm_tok_pat_589b0f8) =
  (* pattern "[^\"\\n\\\\\\$]+" *) token env tok

let map_pat_1167a92 (env : env) (tok : CST.pat_1167a92) =
  (* pattern [^-\s\$] *) token env tok

let map_expose_port (env : env) ((v1, v2) : CST.expose_port) =
  let v1 = (* pattern \d+ *) token env v1 in
  let v2 =
    (match v2 with
    | Some x ->
        (match x with
        | `SLAS_ce91595 tok -> (* "/tcp" *) token env tok
        | `SLAS_c773c8d tok -> (* "/udp" *) token env tok
        )
    | None -> todo env ())
  in
  todo env (v1, v2)

let map_maintainer_instruction (env : env) ((v1, v2) : CST.maintainer_instruction) =
  let v1 =
    (* pattern [mM][aA][iI][nN][tT][aA][iI][nN][eE][rR] *) token env v1
  in
  let v2 = (* pattern .* *) token env v2 in
  todo env (v1, v2)

let map_anon_comment (env : env) ((v1, v2) : CST.anon_comment) =
  let v1 = (* "#" *) token env v1 in
  let v2 = (* pattern .* *) token env v2 in
  todo env (v1, v2)

let map_expansion (env : env) ((v1, v2) : CST.expansion) =
  let v1 = (* "$" *) token env v1 in
  let v2 =
    (match v2 with
    | `Var tok ->
        (* pattern [a-zA-Z][a-zA-Z0-9_]* *) token env tok
    | `LCURL_pat_8713919_RCURL (v1, v2, v3) ->
        let v1 = (* "{" *) token env v1 in
        let v2 = (* pattern [^\}]+ *) token env v2 in
        let v3 = (* "}" *) token env v3 in
        todo env (v1, v2, v3)
    )
  in
  todo env (v1, v2)

let map_shell_fragment (env : env) (xs : CST.shell_fragment) =
  List.map (fun x ->
    (match x with
    | `Pat_4b81dfc tok ->
        (* pattern [^\\\[\n#\s][^\\\n]* *) token env tok
    | `Pat_f05eb95 tok -> (* pattern \\[^\n] *) token env tok
    )
  ) xs

let map_param (env : env) ((v1, v2, v3, v4) : CST.param) =
  let v1 = (* "--" *) token env v1 in
  let v2 = (* pattern [a-z][-a-z]* *) token env v2 in
  let v3 = (* "=" *) token env v3 in
  let v4 = (* pattern [^\s]+ *) token env v4 in
  todo env (v1, v2, v3, v4)

let map_cross_build_instruction (env : env) ((v1, v2) : CST.cross_build_instruction) =
  let v1 =
    (* pattern [cC][rR][oO][sS][sS]_[bB][uU][iI][lL][dD][a-zA-Z_]* *) token env v1
  in
  let v2 = (* pattern .* *) token env v2 in
  todo env (v1, v2)

let map_comment_line (env : env) ((v1, v2) : CST.comment_line) =
  let v1 = map_anon_comment env v1 in
  let v2 = (* "\n" *) token env v2 in
  todo env (v1, v2)

let map_expose_instruction (env : env) ((v1, v2) : CST.expose_instruction) =
  let v1 =
    (* pattern [eE][xX][pP][oO][sS][eE] *) token env v1
  in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Expose_port x -> map_expose_port env x
      | `Expa x -> map_expansion env x
      )
    ) v2
  in
  todo env (v1, v2)

let map_user_name_or_group (env : env) (xs : CST.user_name_or_group) =
  List.map (fun x ->
    (match x with
    | `Pat_660c06c tok ->
        (* pattern [a-z][-a-z0-9_]* *) token env tok
    | `Expa x -> map_expansion env x
    )
  ) xs

let map_path (env : env) ((v1, v2) : CST.path) =
  let v1 =
    (match v1 with
    | `Pat_1167a92 tok -> (* pattern [^-\s\$] *) token env tok
    | `Expa x -> map_expansion env x
    )
  in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Pat_0c7fc22 tok -> (* pattern [^\s\$]+ *) token env tok
      | `Expa x -> map_expansion env x
      )
    ) v2
  in
  todo env (v1, v2)

let map_image_alias (env : env) (xs : CST.image_alias) =
  List.map (fun x ->
    (match x with
    | `Pat_9a14b5c tok ->
        (* pattern [-a-zA-Z0-9_]+ *) token env tok
    | `Expa x -> map_expansion env x
    )
  ) xs

let map_image_digest (env : env) ((v1, v2) : CST.image_digest) =
  let v1 = (* "@" *) token env v1 in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Imm_tok_pat_d2727a0 tok ->
          (* pattern [a-zA-Z0-9:]+ *) token env tok
      | `Expa x -> map_expansion env x
      )
    ) v2
  in
  todo env (v1, v2)

let map_image_name (env : env) (xs : CST.image_name) =
  List.map (fun x ->
    (match x with
    | `Pat_2b37705 tok -> (* pattern [^@:\s\$]+ *) token env tok
    | `Expa x -> map_expansion env x
    )
  ) xs

let map_image_tag (env : env) ((v1, v2) : CST.image_tag) =
  let v1 = (* ":" *) token env v1 in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Imm_tok_pat_bcfc287 tok ->
          (* pattern [^@\s\$]+ *) token env tok
      | `Expa x -> map_expansion env x
      )
    ) v2
  in
  todo env (v1, v2)

let map_double_quoted_string (env : env) ((v1, v2, v3) : CST.double_quoted_string) =
  let v1 = (* "\"" *) token env v1 in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Imm_tok_pat_589b0f8 tok ->
          (* pattern "[^\"\\n\\\\\\$]+" *) token env tok
      | `Esc_seq tok -> (* escape_sequence *) token env tok
      | `Expa x -> map_expansion env x
      )
    ) v2
  in
  let v3 = (* "\"" *) token env v3 in
  todo env (v1, v2, v3)

let map_unquoted_string (env : env) (xs : CST.unquoted_string) =
  List.map (fun x ->
    (match x with
    | `Imm_tok_pat_24a1611 tok ->
        (* pattern "[^\\s\\n\\\"\\\\\\$]+" *) token env tok
    | `BSLASHSPACE tok -> (* "\\ " *) token env tok
    | `Expa x -> map_expansion env x
    )
  ) xs

let map_stopsignal_value (env : env) (xs : CST.stopsignal_value) =
  List.map (fun x ->
    (match x with
    | `Pat_441cd81 tok -> (* pattern [A-Z0-9]+ *) token env tok
    | `Expa x -> map_expansion env x
    )
  ) xs

let map_user_instruction (env : env) ((v1, v2, v3) : CST.user_instruction) =
  let v1 = (* pattern [uU][sS][eE][rR] *) token env v1 in
  let v2 = map_user_name_or_group env v2 in
  let v3 =
    (match v3 with
    | Some (v1, v2) ->
        let v1 = (* ":" *) token env v1 in
        let v2 = map_user_name_or_group env v2 in
        todo env (v1, v2)
    | None -> todo env ())
  in
  todo env (v1, v2, v3)

let map_workdir_instruction (env : env) ((v1, v2) : CST.workdir_instruction) =
  let v1 =
    (* pattern [wW][oO][rR][kK][dD][iI][rR] *) token env v1
  in
  let v2 = map_path env v2 in
  todo env (v1, v2)

let map_add_instruction (env : env) ((v1, v2, v3, v4, v5) : CST.add_instruction) =
  let v1 = (* pattern [aA][dD][dD] *) token env v1 in
  let v2 =
    (match v2 with
    | Some x -> map_param env x
    | None -> todo env ())
  in
  let v3 = map_path env v3 in
  let v4 = (* pattern [\t ]+ *) token env v4 in
  let v5 = map_path env v5 in
  todo env (v1, v2, v3, v4, v5)

let map_copy_instruction (env : env) ((v1, v2, v3, v4, v5) : CST.copy_instruction) =
  let v1 = (* pattern [cC][oO][pP][yY] *) token env v1 in
  let v2 =
    (match v2 with
    | Some x -> map_param env x
    | None -> todo env ())
  in
  let v3 = map_path env v3 in
  let v4 = (* pattern [\t ]+ *) token env v4 in
  let v5 = map_path env v5 in
  todo env (v1, v2, v3, v4, v5)

let map_image_spec (env : env) ((v1, v2, v3) : CST.image_spec) =
  let v1 = map_image_name env v1 in
  let v2 =
    (match v2 with
    | Some x -> map_image_tag env x
    | None -> todo env ())
  in
  let v3 =
    (match v3 with
    | Some x -> map_image_digest env x
    | None -> todo env ())
  in
  todo env (v1, v2, v3)

let map_array_element (env : env) (x : CST.array_element) =
  (match x with
  | `Double_quoted_str x -> map_double_quoted_string env x
  | `Semg_ellips tok -> (* "..." *) token env tok
  | `Semg_meta tok ->
      (* pattern \$[A-Z_][A-Z_0-9]* *) token env tok
  )

let map_anon_choice_double_quoted_str_6b200ac (env : env) (x : CST.anon_choice_double_quoted_str_6b200ac) =
  (match x with
  | `Double_quoted_str x -> map_double_quoted_string env x
  | `Unqu_str x -> map_unquoted_string env x
  )

let map_stopsignal_instruction (env : env) ((v1, v2) : CST.stopsignal_instruction) =
  let v1 =
    (* pattern [sS][tT][oO][pP][sS][iI][gG][nN][aA][lL] *) token env v1
  in
  let v2 = map_stopsignal_value env v2 in
  todo env (v1, v2)

let map_from_instruction (env : env) ((v1, v2, v3, v4) : CST.from_instruction) =
  let v1 = (* pattern [fF][rR][oO][mM] *) token env v1 in
  let v2 =
    (match v2 with
    | Some x -> map_param env x
    | None -> todo env ())
  in
  let v3 = map_image_spec env v3 in
  let v4 =
    (match v4 with
    | Some (v1, v2) ->
        let v1 = (* pattern [aA][sS] *) token env v1 in
        let v2 = map_image_alias env v2 in
        todo env (v1, v2)
    | None -> todo env ())
  in
  todo env (v1, v2, v3, v4)

let map_string_array (env : env) ((v1, v2, v3) : CST.string_array) =
  let v1 = (* "[" *) token env v1 in
  let v2 =
    (match v2 with
    | Some (v1, v2) ->
        let v1 = map_array_element env v1 in
        let v2 =
          List.map (fun (v1, v2) ->
            let v1 = (* "," *) token env v1 in
            let v2 = map_array_element env v2 in
            todo env (v1, v2)
          ) v2
        in
        todo env (v1, v2)
    | None -> todo env ())
  in
  let v3 = (* "]" *) token env v3 in
  todo env (v1, v2, v3)

let map_arg_instruction (env : env) ((v1, v2, v3) : CST.arg_instruction) =
  let v1 = (* pattern [aA][rR][gG] *) token env v1 in
  let v2 = (* pattern [a-zA-Z0-9_]+ *) token env v2 in
  let v3 =
    (match v3 with
    | Some (v1, v2) ->
        let v1 = (* "=" *) token env v1 in
        let v2 = map_anon_choice_double_quoted_str_6b200ac env v2 in
        todo env (v1, v2)
    | None -> todo env ())
  in
  todo env (v1, v2, v3)

let map_env_pair (env : env) ((v1, v2, v3) : CST.env_pair) =
  let v1 =
    (* pattern [a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9] *) token env v1
  in
  let v2 = (* "=" *) token env v2 in
  let v3 = map_anon_choice_double_quoted_str_6b200ac env v3 in
  todo env (v1, v2, v3)

let map_spaced_env_pair (env : env) ((v1, v2, v3) : CST.spaced_env_pair) =
  let v1 =
    (* pattern [a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9] *) token env v1
  in
  let v2 = (* pattern \s+ *) token env v2 in
  let v3 = map_anon_choice_double_quoted_str_6b200ac env v3 in
  todo env (v1, v2, v3)

let map_label_pair (env : env) ((v1, v2, v3) : CST.label_pair) =
  let v1 = (* pattern [-a-zA-Z0-9\._]+ *) token env v1 in
  let v2 = (* "=" *) token env v2 in
  let v3 = map_anon_choice_double_quoted_str_6b200ac env v3 in
  todo env (v1, v2, v3)

let map_shell_instruction (env : env) ((v1, v2) : CST.shell_instruction) =
  let v1 = (* pattern [sS][hH][eE][lL][lL] *) token env v1 in
  let v2 = map_string_array env v2 in
  todo env (v1, v2)

let map_volume_instruction (env : env) ((v1, v2) : CST.volume_instruction) =
  let v1 =
    (* pattern [vV][oO][lL][uU][mM][eE] *) token env v1
  in
  let v2 =
    (match v2 with
    | `Str_array x -> map_string_array env x
    | `Path_rep_non_nl_whit_path (v1, v2) ->
        let v1 = map_path env v1 in
        let v2 =
          List.map (fun (v1, v2) ->
            let v1 = (* pattern [\t ]+ *) token env v1 in
            let v2 = map_path env v2 in
            todo env (v1, v2)
          ) v2
        in
        todo env (v1, v2)
    )
  in
  todo env (v1, v2)

let map_anon_choice_str_array_878ad0b (env : env) (x : CST.anon_choice_str_array_878ad0b) =
  (match x with
  | `Str_array x -> map_string_array env x
  | `Shell_cmd (v1, v2) ->
      let v1 = map_shell_fragment env v1 in
      let v2 =
        List.map (fun (v1, v2, v3) ->
          let v1 = (* "\\\n" *) token env v1 in
          let v2 = List.map (map_comment_line env) v2 in
          let v3 = map_shell_fragment env v3 in
          todo env (v1, v2, v3)
        ) v2
      in
      todo env (v1, v2)
  )

let map_env_instruction (env : env) ((v1, v2) : CST.env_instruction) =
  let v1 = (* pattern [eE][nN][vV] *) token env v1 in
  let v2 =
    (match v2 with
    | `Rep1_env_pair xs -> List.map (map_env_pair env) xs
    | `Spaced_env_pair x -> map_spaced_env_pair env x
    )
  in
  todo env (v1, v2)

let map_label_instruction (env : env) ((v1, v2) : CST.label_instruction) =
  let v1 = (* pattern [lL][aA][bB][eE][lL] *) token env v1 in
  let v2 = List.map (map_label_pair env) v2 in
  todo env (v1, v2)

let map_cmd_instruction (env : env) ((v1, v2) : CST.cmd_instruction) =
  let v1 = (* pattern [cC][mM][dD] *) token env v1 in
  let v2 = map_anon_choice_str_array_878ad0b env v2 in
  todo env (v1, v2)

let map_entrypoint_instruction (env : env) ((v1, v2) : CST.entrypoint_instruction) =
  let v1 =
    (* pattern [eE][nN][tT][rR][yY][pP][oO][iI][nN][tT] *) token env v1
  in
  let v2 = map_anon_choice_str_array_878ad0b env v2 in
  todo env (v1, v2)

let map_run_instruction (env : env) ((v1, v2) : CST.run_instruction) =
  let v1 = (* pattern [rR][uU][nN] *) token env v1 in
  let v2 = map_anon_choice_str_array_878ad0b env v2 in
  todo env (v1, v2)

let map_healthcheck_instruction (env : env) ((v1, v2) : CST.healthcheck_instruction) =
  let v1 =
    (* pattern [hH][eE][aA][lL][tT][hH][cC][hH][eE][cC][kK] *) token env v1
  in
  let v2 =
    (match v2 with
    | `NONE tok -> (* "NONE" *) token env tok
    | `Rep_param_cmd_inst (v1, v2) ->
        let v1 = List.map (map_param env) v1 in
        let v2 = map_cmd_instruction env v2 in
        todo env (v1, v2)
    )
  in
  todo env (v1, v2)

let rec map_instruction (env : env) (x : CST.instruction) =
  (match x with
  | `Semg_ellips tok -> (* "..." *) token env tok
  | `Semg_meta tok ->
      (* pattern \$[A-Z_][A-Z_0-9]* *) token env tok
  | `Choice_from_inst x ->
      (match x with
      | `From_inst x -> map_from_instruction env x
      | `Run_inst x -> map_run_instruction env x
      | `Cmd_inst x -> map_cmd_instruction env x
      | `Label_inst x -> map_label_instruction env x
      | `Expose_inst x -> map_expose_instruction env x
      | `Env_inst x -> map_env_instruction env x
      | `Add_inst x -> map_add_instruction env x
      | `Copy_inst x -> map_copy_instruction env x
      | `Entr_inst x -> map_entrypoint_instruction env x
      | `Volume_inst x -> map_volume_instruction env x
      | `User_inst x -> map_user_instruction env x
      | `Work_inst x -> map_workdir_instruction env x
      | `Arg_inst x -> map_arg_instruction env x
      | `Onbu_inst x -> map_onbuild_instruction env x
      | `Stop_inst x -> map_stopsignal_instruction env x
      | `Heal_inst x -> map_healthcheck_instruction env x
      | `Shell_inst x -> map_shell_instruction env x
      | `Main_inst x -> map_maintainer_instruction env x
      | `Cross_build_inst x -> map_cross_build_instruction env x
      )
  )

and map_onbuild_instruction (env : env) ((v1, v2) : CST.onbuild_instruction) =
  let v1 =
    (* pattern [oO][nN][bB][uU][iI][lL][dD] *) token env v1
  in
  let v2 = map_instruction env v2 in
  todo env (v1, v2)

let map_source_file (env : env) (xs : CST.source_file) =
  List.map (fun (v1, v2) ->
    let v1 =
      (match v1 with
      | `Inst x -> map_instruction env x
      | `Comm tok -> (* pattern #.* *) token env tok
      )
    in
    let v2 = (* "\n" *) token env v2 in
    todo env (v1, v2)
  ) xs
