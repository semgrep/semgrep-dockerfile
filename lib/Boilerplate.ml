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

let map_imm_tok_pat_f6e1de8 (env : env) (tok : CST.imm_tok_pat_f6e1de8) =
  (* pattern [^\s]+ *) token env tok

let map_pat_copy (env : env) (tok : CST.pat_copy) =
  (* pattern [cC][oO][pP][yY] *) token env tok

let map_imm_tok_pat_f46f69d (env : env) (tok : CST.imm_tok_pat_f46f69d) =
  (* pattern [^\s=,]+ *) token env tok

let map_imm_tok_bslashspace (env : env) (tok : CST.imm_tok_bslashspace) =
  (* "\\ " *) token env tok

let map_non_newline_whitespace (env : env) (tok : CST.non_newline_whitespace) =
  (* pattern [\t ]+ *) token env tok

let map_pat_eda9032 (env : env) (tok : CST.pat_eda9032) =
  (* pattern \\[^\n,=-] *) token env tok

let map_pat_main (env : env) (tok : CST.pat_main) =
  (* pattern [mM][aA][iI][nN][tT][aA][iI][nN][eE][rR] *) token env tok

let map_pat_cmd (env : env) (tok : CST.pat_cmd) =
  (* pattern [cC][mM][dD] *) token env tok

let map_imm_tok_colon (env : env) (tok : CST.imm_tok_colon) =
  (* ":" *) token env tok

let map_semgrep_metavariable (env : env) (tok : CST.semgrep_metavariable) =
  (* pattern \$[A-Z_][A-Z_0-9]* *) token env tok

let map_pat_4a2f38a (env : env) (tok : CST.pat_4a2f38a) =
  (* pattern [cC][rR][oO][sS][sS]_[bB][uU][iI][lL][dD][a-zA-Z_]* *) token env tok

let map_pat_work (env : env) (tok : CST.pat_work) =
  (* pattern [wW][oO][rR][kK][dD][iI][rR] *) token env tok

let map_imm_tok_pat_b295287 (env : env) (tok : CST.imm_tok_pat_b295287) =
  (* pattern ([a-z][-a-z0-9_]*|[0-9]+) *) token env tok

let map_pat_b295287 (env : env) (tok : CST.pat_b295287) =
  (* pattern ([a-z][-a-z0-9_]*|[0-9]+) *) token env tok

let map_pat_dea634e (env : env) (tok : CST.pat_dea634e) =
  (* pattern [^\\\[\n#\s,=-][^\\\n]* *) token env tok

let map_pat_b1120d3 (env : env) (tok : CST.pat_b1120d3) =
  (* pattern [,=-] *) token env tok

let map_pat_4de4cb9 (env : env) (tok : CST.pat_4de4cb9) =
  (* pattern [a-zA-Z0-9_]+ *) token env tok

let map_escape_sequence (env : env) (tok : CST.escape_sequence) =
  (* escape_sequence *) token env tok

let map_pat_user (env : env) (tok : CST.pat_user) =
  (* pattern [uU][sS][eE][rR] *) token env tok

let map_imm_tok_mount (env : env) (tok : CST.imm_tok_mount) =
  (* "mount" *) token env tok

let map_pat_as (env : env) (tok : CST.pat_as) =
  (* pattern [aA][sS] *) token env tok

let map_pat_441cd81 (env : env) (tok : CST.pat_441cd81) =
  (* pattern [A-Z0-9]+ *) token env tok

let map_pat_expose (env : env) (tok : CST.pat_expose) =
  (* pattern [eE][xX][pP][oO][sS][eE] *) token env tok

let map_imm_tok_rcurl (env : env) (tok : CST.imm_tok_rcurl) =
  (* "}" *) token env tok

let map_imm_tok_comma (env : env) (tok : CST.imm_tok_comma) =
  (* "," *) token env tok

let map_pat_onbu (env : env) (tok : CST.pat_onbu) =
  (* pattern [oO][nN][bB][uU][iI][lL][dD] *) token env tok

let map_imm_tok_pat_3d340f6 (env : env) (tok : CST.imm_tok_pat_3d340f6) =
  (* pattern \s+ *) token env tok

let map_pat_4128122 (env : env) (tok : CST.pat_4128122) =
  (* pattern [-a-zA-Z0-9\._]+ *) token env tok

let map_imm_tok_pat_24a1611 (env : env) (tok : CST.imm_tok_pat_24a1611) =
  (* pattern "[^\\s\\n\\\"\\\\\\$]+" *) token env tok

let map_pat_heal (env : env) (tok : CST.pat_heal) =
  (* pattern [hH][eE][aA][lL][tT][hH][cC][hH][eE][cC][kK] *) token env tok

let map_variable (env : env) (tok : CST.variable) =
  (* pattern [a-zA-Z][a-zA-Z0-9_]* *) token env tok

let map_pat_env (env : env) (tok : CST.pat_env) =
  (* pattern [eE][nN][vV] *) token env tok

let map_imm_tok_eq (env : env) (tok : CST.imm_tok_eq) =
  (* "=" *) token env tok

let map_pat_add (env : env) (tok : CST.pat_add) =
  (* pattern [aA][dD][dD] *) token env tok

let map_pat_arg (env : env) (tok : CST.pat_arg) =
  (* pattern [aA][rR][gG] *) token env tok

let map_imm_tok_pat_f43f746 (env : env) (tok : CST.imm_tok_pat_f43f746) =
  (* pattern [a-z][-a-z]* *) token env tok

let map_pat_4fd4a56 (env : env) (tok : CST.pat_4fd4a56) =
  (* pattern .* *) token env tok

let map_pat_18946a5 (env : env) (tok : CST.pat_18946a5) =
  (* pattern [a-zA-Z]([a-zA-Z0-9_]*[a-zA-Z0-9])? *) token env tok

let map_imm_tok_pat_d2727a0 (env : env) (tok : CST.imm_tok_pat_d2727a0) =
  (* pattern [a-zA-Z0-9:]+ *) token env tok

let map_pat_9a14b5c (env : env) (tok : CST.pat_9a14b5c) =
  (* pattern [-a-zA-Z0-9_]+ *) token env tok

let map_imm_tok_pat_9a14b5c (env : env) (tok : CST.imm_tok_pat_9a14b5c) =
  (* pattern [-a-zA-Z0-9_]+ *) token env tok

let map_pat_run (env : env) (tok : CST.pat_run) =
  (* pattern [rR][uU][nN] *) token env tok

let map_pat_8165e5f (env : env) (tok : CST.pat_8165e5f) =
  (* pattern [^@:\s\$-] *) token env tok

let map_imm_tok_dollar (env : env) (tok : CST.imm_tok_dollar) =
  (* "$" *) token env tok

let map_imm_tok_pat_0c7fc22 (env : env) (tok : CST.imm_tok_pat_0c7fc22) =
  (* pattern [^\s\$]+ *) token env tok

let map_pat_1167a92 (env : env) (tok : CST.pat_1167a92) =
  (* pattern [^-\s\$] *) token env tok

let map_pat_stop (env : env) (tok : CST.pat_stop) =
  (* pattern [sS][tT][oO][pP][sS][iI][gG][nN][aA][lL] *) token env tok

let map_imm_tok_pat_441cd81 (env : env) (tok : CST.imm_tok_pat_441cd81) =
  (* pattern [A-Z0-9]+ *) token env tok

let map_pat_volume (env : env) (tok : CST.pat_volume) =
  (* pattern [vV][oO][lL][uU][mM][eE] *) token env tok

let map_pat_shell (env : env) (tok : CST.pat_shell) =
  (* pattern [sS][hH][eE][lL][lL] *) token env tok

let map_imm_tok_pat_589b0f8 (env : env) (tok : CST.imm_tok_pat_589b0f8) =
  (* pattern "[^\"\\n\\\\\\$]+" *) token env tok

let map_imm_tok_pat_bcfc287 (env : env) (tok : CST.imm_tok_pat_bcfc287) =
  (* pattern [^@\s\$]+ *) token env tok

let map_imm_tok_pat_2b37705 (env : env) (tok : CST.imm_tok_pat_2b37705) =
  (* pattern [^@:\s\$]+ *) token env tok

let map_pat_217c202 (env : env) (tok : CST.pat_217c202) =
  (* pattern \d+ *) token env tok

let map_pat_entr (env : env) (tok : CST.pat_entr) =
  (* pattern [eE][nN][tT][rR][yY][pP][oO][iI][nN][tT] *) token env tok

let map_comment (env : env) (tok : CST.comment) =
  (* pattern #.* *) token env tok

let map_pat_label (env : env) (tok : CST.pat_label) =
  (* pattern [lL][aA][bB][eE][lL] *) token env tok

let map_imm_tok_lcurl (env : env) (tok : CST.imm_tok_lcurl) =
  (* "{" *) token env tok

let map_imm_tok_at (env : env) (tok : CST.imm_tok_at) =
  (* "@" *) token env tok

let map_imm_tok_pat_8713919 (env : env) (tok : CST.imm_tok_pat_8713919) =
  (* pattern [^\}]+ *) token env tok

let map_pat_from (env : env) (tok : CST.pat_from) =
  (* pattern [fF][rR][oO][mM] *) token env tok

let map_shell_fragment (env : env) (xs : CST.shell_fragment) =
  List.map (fun x ->
    (match x with
    | `Pat_b1120d3 x -> map_pat_b1120d3 env x
    | `Pat_dea634e x -> map_pat_dea634e env x
    | `Pat_eda9032 x -> map_pat_eda9032 env x
    )
  ) xs

let map_mount_param_param (env : env) ((v1, v2, v3) : CST.mount_param_param) =
  let v1 = map_imm_tok_pat_f46f69d env v1 in
  let v2 = map_imm_tok_eq env v2 in
  let v3 = map_imm_tok_pat_f46f69d env v3 in
  todo env (v1, v2, v3)

let map_param (env : env) ((v1, v2, v3, v4) : CST.param) =
  let v1 = (* "--" *) token env v1 in
  let v2 = map_imm_tok_pat_f43f746 env v2 in
  let v3 = map_imm_tok_eq env v3 in
  let v4 = map_imm_tok_pat_f6e1de8 env v4 in
  todo env (v1, v2, v3, v4)

let map_anon_comment (env : env) ((v1, v2) : CST.anon_comment) =
  let v1 = (* "#" *) token env v1 in
  let v2 = map_pat_4fd4a56 env v2 in
  todo env (v1, v2)

let map_maintainer_instruction (env : env) ((v1, v2) : CST.maintainer_instruction) =
  let v1 = map_pat_main env v1 in
  let v2 = map_pat_4fd4a56 env v2 in
  todo env (v1, v2)

let map_cross_build_instruction (env : env) ((v1, v2) : CST.cross_build_instruction) =
  let v1 = map_pat_4a2f38a env v1 in
  let v2 = map_pat_4fd4a56 env v2 in
  todo env (v1, v2)

let map_env_key (env : env) (x : CST.env_key) =
  map_pat_18946a5 env x

let map_expose_port (env : env) (x : CST.expose_port) =
  (match x with
  | `Semg_ellips tok -> (* "..." *) token env tok
  | `Pat_217c202_opt_choice_SLAS (v1, v2) ->
      let v1 = map_pat_217c202 env v1 in
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
  )

let map_expansion_body (env : env) (x : CST.expansion_body) =
  (match x with
  | `Var tok ->
      (* pattern [a-zA-Z][a-zA-Z0-9_]* *) token env tok
  | `Imm_tok_lcurl_imm_tok_pat_8713919_imm_tok_rcurl (v1, v2, v3) ->
      let v1 = map_imm_tok_lcurl env v1 in
      let v2 = map_imm_tok_pat_8713919 env v2 in
      let v3 = map_imm_tok_rcurl env v3 in
      todo env (v1, v2, v3)
  )

let map_mount_param (env : env) ((v1, v2, v3, v4, v5) : CST.mount_param) =
  let v1 = (* "--" *) token env v1 in
  let v2 = map_imm_tok_mount env v2 in
  let v3 = map_imm_tok_eq env v3 in
  let v4 = map_mount_param_param env v4 in
  let v5 =
    List.map (fun (v1, v2) ->
      let v1 = map_imm_tok_comma env v1 in
      let v2 = map_mount_param_param env v2 in
      todo env (v1, v2)
    ) v5
  in
  todo env (v1, v2, v3, v4, v5)

let map_comment_line (env : env) ((v1, v2) : CST.comment_line) =
  let v1 = map_anon_comment env v1 in
  let v2 = (* "\n" *) token env v2 in
  todo env (v1, v2)

let map_expansion (env : env) ((v1, v2) : CST.expansion) =
  let v1 = (* "$" *) token env v1 in
  let v2 = map_expansion_body env v2 in
  todo env (v1, v2)

let map_imm_expansion (env : env) ((v1, v2) : CST.imm_expansion) =
  let v1 = map_imm_tok_dollar env v1 in
  let v2 = map_expansion_body env v2 in
  todo env (v1, v2)

let map_shell_command (env : env) (x : CST.shell_command) =
  (match x with
  | `Semg_ellips tok -> (* "..." *) token env tok
  | `Rep_comm_line_shell_frag_rep_requ_line_cont_rep_comm_line_shell_frag (v1, v2, v3) ->
      let v1 = List.map (map_comment_line env) v1 in
      let v2 = map_shell_fragment env v2 in
      let v3 =
        List.map (fun (v1, v2, v3) ->
          let v1 = (* "\\\n" *) token env v1 in
          let v2 = List.map (map_comment_line env) v2 in
          let v3 = map_shell_fragment env v3 in
          todo env (v1, v2, v3)
        ) v3
      in
      todo env (v1, v2, v3)
  )

let map_expose_instruction (env : env) ((v1, v2) : CST.expose_instruction) =
  let v1 = map_pat_expose env v1 in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Expose_port x -> map_expose_port env x
      | `Expa x -> map_expansion env x
      )
    ) v2
  in
  todo env (v1, v2)

let map_immediate_expansion (env : env) (x : CST.immediate_expansion) =
  map_imm_expansion env x

let map_stopsignal_value (env : env) ((v1, v2) : CST.stopsignal_value) =
  let v1 =
    (match v1 with
    | `Pat_441cd81 x -> map_pat_441cd81 env x
    | `Expa x -> map_expansion env x
    )
  in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Imm_tok_pat_441cd81 x -> map_imm_tok_pat_441cd81 env x
      | `Imme_expa x -> map_immediate_expansion env x
      )
    ) v2
  in
  todo env (v1, v2)

let map_image_name (env : env) ((v1, v2) : CST.image_name) =
  let v1 =
    (match v1 with
    | `Pat_8165e5f x -> map_pat_8165e5f env x
    | `Expa x -> map_expansion env x
    )
  in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Imm_tok_pat_2b37705 x -> map_imm_tok_pat_2b37705 env x
      | `Imme_expa x -> map_immediate_expansion env x
      )
    ) v2
  in
  todo env (v1, v2)

let map_immediate_user_name_or_group_fragment (env : env) (x : CST.immediate_user_name_or_group_fragment) =
  (match x with
  | `Imm_tok_pat_b295287 x -> map_imm_tok_pat_b295287 env x
  | `Imme_expa x -> map_immediate_expansion env x
  )

let map_image_alias (env : env) ((v1, v2) : CST.image_alias) =
  let v1 =
    (match v1 with
    | `Pat_9a14b5c x -> map_pat_9a14b5c env x
    | `Expa x -> map_expansion env x
    )
  in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Imm_tok_pat_9a14b5c x -> map_imm_tok_pat_9a14b5c env x
      | `Imme_expa x -> map_immediate_expansion env x
      )
    ) v2
  in
  todo env (v1, v2)

let map_image_digest (env : env) ((v1, v2) : CST.image_digest) =
  let v1 = map_imm_tok_at env v1 in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Imm_tok_pat_d2727a0 x -> map_imm_tok_pat_d2727a0 env x
      | `Imme_expa x -> map_immediate_expansion env x
      )
    ) v2
  in
  todo env (v1, v2)

let map_double_quoted_string (env : env) ((v1, v2, v3) : CST.double_quoted_string) =
  let v1 = (* "\"" *) token env v1 in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Imm_tok_pat_589b0f8 x -> map_imm_tok_pat_589b0f8 env x
      | `Esc_seq tok -> (* escape_sequence *) token env tok
      | `Imme_expa x -> map_immediate_expansion env x
      )
    ) v2
  in
  let v3 = (* "\"" *) token env v3 in
  todo env (v1, v2, v3)

let map_unquoted_string (env : env) (xs : CST.unquoted_string) =
  List.map (fun x ->
    (match x with
    | `Imm_tok_pat_24a1611 x -> map_imm_tok_pat_24a1611 env x
    | `Imm_tok_bsla x -> map_imm_tok_bslashspace env x
    | `Imme_expa x -> map_immediate_expansion env x
    )
  ) xs

let map_image_tag (env : env) ((v1, v2) : CST.image_tag) =
  let v1 = map_imm_tok_colon env v1 in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Imm_tok_pat_bcfc287 x -> map_imm_tok_pat_bcfc287 env x
      | `Imme_expa x -> map_immediate_expansion env x
      )
    ) v2
  in
  todo env (v1, v2)

let map_path (env : env) ((v1, v2) : CST.path) =
  let v1 =
    (match v1 with
    | `Pat_1167a92 x -> map_pat_1167a92 env x
    | `Expa x -> map_expansion env x
    )
  in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Imm_tok_pat_0c7fc22 x -> map_imm_tok_pat_0c7fc22 env x
      | `Imme_expa x -> map_immediate_expansion env x
      )
    ) v2
  in
  todo env (v1, v2)

let map_stopsignal_instruction (env : env) ((v1, v2) : CST.stopsignal_instruction) =
  let v1 = map_pat_stop env v1 in
  let v2 = map_stopsignal_value env v2 in
  todo env (v1, v2)

let map_user_name_or_group (env : env) ((v1, v2) : CST.user_name_or_group) =
  let v1 =
    (match v1 with
    | `Pat_b295287 x -> map_pat_b295287 env x
    | `Expa x -> map_expansion env x
    )
  in
  let v2 =
    List.map (map_immediate_user_name_or_group_fragment env) v2
  in
  todo env (v1, v2)

let map_immediate_user_name_or_group (env : env) (xs : CST.immediate_user_name_or_group) =
  List.map (map_immediate_user_name_or_group_fragment env) xs

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

let map_copy_instruction (env : env) ((v1, v2, v3, v4) : CST.copy_instruction) =
  let v1 = map_pat_copy env v1 in
  let v2 =
    (match v2 with
    | Some x -> map_param env x
    | None -> todo env ())
  in
  let v3 =
    List.map (fun (v1, v2) ->
      let v1 = map_path env v1 in
      let v2 = (* pattern [\t ]+ *) token env v2 in
      todo env (v1, v2)
    ) v3
  in
  let v4 = map_path env v4 in
  todo env (v1, v2, v3, v4)

let map_workdir_instruction (env : env) ((v1, v2) : CST.workdir_instruction) =
  let v1 = map_pat_work env v1 in
  let v2 = map_path env v2 in
  todo env (v1, v2)

let map_add_instruction (env : env) ((v1, v2, v3, v4) : CST.add_instruction) =
  let v1 = map_pat_add env v1 in
  let v2 =
    (match v2 with
    | Some x -> map_param env x
    | None -> todo env ())
  in
  let v3 =
    List.map (fun (v1, v2) ->
      let v1 = map_path env v1 in
      let v2 = (* pattern [\t ]+ *) token env v2 in
      todo env (v1, v2)
    ) v3
  in
  let v4 = map_path env v4 in
  todo env (v1, v2, v3, v4)

let map_user_instruction (env : env) ((v1, v2, v3) : CST.user_instruction) =
  let v1 = map_pat_user env v1 in
  let v2 = map_user_name_or_group env v2 in
  let v3 =
    (match v3 with
    | Some (v1, v2) ->
        let v1 = map_imm_tok_colon env v1 in
        let v2 = map_immediate_user_name_or_group env v2 in
        todo env (v1, v2)
    | None -> todo env ())
  in
  todo env (v1, v2, v3)

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
  let v1 = map_pat_arg env v1 in
  let v2 =
    (match v2 with
    | `Semg_meta tok ->
        (* pattern \$[A-Z_][A-Z_0-9]* *) token env tok
    | `Pat_4de4cb9 x -> map_pat_4de4cb9 env x
    )
  in
  let v3 =
    (match v3 with
    | Some (v1, v2) ->
        let v1 = map_imm_tok_eq env v1 in
        let v2 = map_anon_choice_double_quoted_str_6b200ac env v2 in
        todo env (v1, v2)
    | None -> todo env ())
  in
  todo env (v1, v2, v3)

let map_spaced_env_pair (env : env) ((v1, v2, v3) : CST.spaced_env_pair) =
  let v1 = map_env_key env v1 in
  let v2 = map_imm_tok_pat_3d340f6 env v2 in
  let v3 = map_anon_choice_double_quoted_str_6b200ac env v3 in
  todo env (v1, v2, v3)

let map_env_pair (env : env) (x : CST.env_pair) =
  (match x with
  | `Semg_ellips tok -> (* "..." *) token env tok
  | `Env_key_imm_tok_eq_opt_choice_double_quoted_str (v1, v2, v3) ->
      let v1 = map_env_key env v1 in
      let v2 = map_imm_tok_eq env v2 in
      let v3 =
        (match v3 with
        | Some x -> map_anon_choice_double_quoted_str_6b200ac env x
        | None -> todo env ())
      in
      todo env (v1, v2, v3)
  )

let map_label_pair (env : env) (x : CST.label_pair) =
  (match x with
  | `Semg_ellips tok -> (* "..." *) token env tok
  | `Choice_semg_meta_imm_tok_eq_choice_double_quoted_str (v1, v2, v3) ->
      let v1 =
        (match v1 with
        | `Semg_meta tok ->
            (* pattern \$[A-Z_][A-Z_0-9]* *) token env tok
        | `Pat_4128122 x -> map_pat_4128122 env x
        )
      in
      let v2 = map_imm_tok_eq env v2 in
      let v3 = map_anon_choice_double_quoted_str_6b200ac env v3 in
      todo env (v1, v2, v3)
  )

let map_from_instruction (env : env) ((v1, v2, v3, v4) : CST.from_instruction) =
  let v1 = map_pat_from env v1 in
  let v2 =
    (match v2 with
    | Some x -> map_param env x
    | None -> todo env ())
  in
  let v3 = map_image_spec env v3 in
  let v4 =
    (match v4 with
    | Some (v1, v2) ->
        let v1 = map_pat_as env v1 in
        let v2 = map_image_alias env v2 in
        todo env (v1, v2)
    | None -> todo env ())
  in
  todo env (v1, v2, v3, v4)

let map_shell_instruction (env : env) ((v1, v2) : CST.shell_instruction) =
  let v1 = map_pat_shell env v1 in
  let v2 = map_string_array env v2 in
  todo env (v1, v2)

let map_volume_instruction (env : env) ((v1, v2) : CST.volume_instruction) =
  let v1 = map_pat_volume env v1 in
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
  | `Shell_cmd x -> map_shell_command env x
  )

let map_env_instruction (env : env) ((v1, v2) : CST.env_instruction) =
  let v1 = map_pat_env env v1 in
  let v2 =
    (match v2 with
    | `Rep1_env_pair xs -> List.map (map_env_pair env) xs
    | `Spaced_env_pair x -> map_spaced_env_pair env x
    )
  in
  todo env (v1, v2)

let map_label_instruction (env : env) ((v1, v2) : CST.label_instruction) =
  let v1 = map_pat_label env v1 in
  let v2 = List.map (map_label_pair env) v2 in
  todo env (v1, v2)

let map_entrypoint_instruction (env : env) ((v1, v2) : CST.entrypoint_instruction) =
  let v1 = map_pat_entr env v1 in
  let v2 = map_anon_choice_str_array_878ad0b env v2 in
  todo env (v1, v2)

let map_cmd_instruction (env : env) ((v1, v2) : CST.cmd_instruction) =
  let v1 = map_pat_cmd env v1 in
  let v2 = map_anon_choice_str_array_878ad0b env v2 in
  todo env (v1, v2)

let map_run_instruction (env : env) ((v1, v2, v3) : CST.run_instruction) =
  let v1 = map_pat_run env v1 in
  let v2 =
    List.map (fun x ->
      (match x with
      | `Param x -> map_param env x
      | `Mount_param x -> map_mount_param env x
      )
    ) v2
  in
  let v3 = map_anon_choice_str_array_878ad0b env v3 in
  todo env (v1, v2, v3)

let map_healthcheck_instruction (env : env) ((v1, v2) : CST.healthcheck_instruction) =
  let v1 = map_pat_heal env v1 in
  let v2 =
    (match v2 with
    | `Semg_meta tok ->
        (* pattern \$[A-Z_][A-Z_0-9]* *) token env tok
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
  let v1 = map_pat_onbu env v1 in
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
